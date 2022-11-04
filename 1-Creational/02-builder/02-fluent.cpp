#include<iostream>
#include<vector>

class Part{
    public:
        virtual std::string getName() const = 0 ;
    private:
};  
class HouseBuilder;
class House{
    public:
        std::vector<Part*> houseParts; 

        void listParts()
        {
            for(auto& p : houseParts)
            {
                std::cout<<p->getName()<<"\n";
            }
        }

        static HouseBuilder build();
    private:
        House(){}
        friend class HouseBuilder;
};


class Room: public Part{
    public:
        std::string getName() const override{
            return "Room";
        }
};


class Yard: public Part{
    public:
        std::string getName() const override{
            return "Yard";
        }
};

class Kitchen: public Part{
    public:
        std::string getName() const override{
            return "Kitchen";
        }
};


class Builder{
    public:
        virtual HouseBuilder& CreateRoom()  =  0 ;
        virtual HouseBuilder& CreateYard()  = 0;
        virtual HouseBuilder& CreateKitchen()  = 0;
};

class HouseBuilder: public Builder{
    public:
        HouseBuilder(){
            house = new House();
        }

        HouseBuilder& CreateRoom()  override{
            house->houseParts.push_back(new Room());
            return *this;
        }

        HouseBuilder& CreateYard()  override
        {
            house->houseParts.push_back(new Yard());
            return *this;
        }
        HouseBuilder& CreateKitchen()  override
        {
            house->houseParts.push_back(new Kitchen());
            return *this;
        }

        House* getHouse()
        {
            return house;
        }

        explicit operator House() {
            return *house;
        }
    private:
         House* house;
         
};

HouseBuilder House::build()
{
    return HouseBuilder();
}

int main()
{
    House house(House::build().CreateRoom().CreateKitchen().CreateYard().CreateRoom());
    house.listParts();
    
}