#include<iostream>


class HouseBuilder;
class House{
    public:
        
        static HouseBuilder build();


        House(House&& other)
        {
            RoomColor = std::move(other.RoomColor);
            RoomSize = std::move(other.RoomSize);

            YardSize = std::move(other.YardSize);
            KitchenColor = std::move(other.KitchenColor);
            KitchenSize = std::move(other.KitchenSize);
        }

        House& operator= (House&& other)
        {
            if(this==&other)
                return *this;
            RoomColor = std::move(other.RoomColor);
            RoomSize = std::move(other.RoomSize);

            YardSize = std::move(other.YardSize);
            KitchenColor = std::move(other.KitchenColor);
            KitchenSize = std::move(other.KitchenSize);
            return *this;
        }

        friend std::ostream& operator<<(std::ostream& out , House& h)
        {
            out<<"Room color is : "<<h.RoomColor<<"\n"
               <<"Room size is :"<<h.RoomSize<<"\n"
               <<"Yard size is : "<<h.YardSize<<"\n"
               <<"Kitchen color is : "<<h.KitchenColor<<"\n"
               <<"Kitchen size is :"<<h.KitchenSize<<"\n";

            return out;
        }
    private:
        House(){}
        // Room
        std::string RoomColor;
        int RoomSize;

        // Yard
        int YardSize;

        // Kitchen
        std::string KitchenColor;
        int KitchenSize;

        friend class HouseBuilder;
        friend class RoomBuilder;
        friend class YardBuilder;
        friend class KitchenBuilder;
};



class RoomBuilder;
class YardBuilder;
class KitchenBuilder;

class HouseBuilder{
    public:
        HouseBuilder():house(h){}
        RoomBuilder room();
        YardBuilder yard();
        KitchenBuilder kitchen();
        operator House()
        {
            return std::move(house);
        }
    protected:
        House& house;
        HouseBuilder(House& house_ ): house(house_){}
    private:
        House h;
        
};

HouseBuilder House::build()
{
    return HouseBuilder();
}



class RoomBuilder: public HouseBuilder{
    public:
        RoomBuilder(House& house_): HouseBuilder(house_){}

        RoomBuilder& withColor(std::string color_)
        {
            house.RoomColor = color_;
            return *this;
        }   

        RoomBuilder& withSize(int size_)
        {
            house.RoomSize = size_;
            return *this;
        }

};  


class YardBuilder: public HouseBuilder{
    public:
        YardBuilder(House& house_): HouseBuilder(house_){}

        YardBuilder& withSize(int size_)
        {
            house.YardSize = size_;
            return *this;
        }

};  

class KitchenBuilder: public HouseBuilder{
    public:
        KitchenBuilder(House& house_): HouseBuilder(house_){}

        KitchenBuilder& withColor(std::string color_)
        {
            house.KitchenColor = color_;
            return *this;
        }   

        KitchenBuilder& withSize(int size_)
        {
            house.KitchenSize = size_;
            return *this;
        }

};  


RoomBuilder HouseBuilder::room()
{
    return RoomBuilder(house);
}

YardBuilder HouseBuilder::yard()
{
    return YardBuilder(house);
}

KitchenBuilder HouseBuilder::kitchen()
{
    return KitchenBuilder(house);
}


int main()
{
   House h = House::build().room().withColor("Red").withSize(12)
                 .kitchen().withColor("Yellow").withSize(20)
                 .yard().withSize(50);

    std::cout<<h<<"\n";
}