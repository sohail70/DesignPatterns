#include<iostream>
#include<vector>

class Part{
    public:
        virtual std::string getName() const = 0 ;
    private:
};  

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
        virtual void CreateRoom() const =  0 ;
        virtual void CreateYard() const = 0;
        virtual void CreateKitchen() const = 0;
};

class HouseBuilder: public Builder{
    public:
        HouseBuilder(){
            house = new House();
        }

        void CreateRoom() const override{
            house->houseParts.push_back(new Room());
        }

        void CreateYard() const override
        {
            house->houseParts.push_back(new Yard());
        }
        void CreateKitchen() const override
        {
            house->houseParts.push_back(new Kitchen());
        }

        House* getHouse()
        {
            return house;
        }

    private:
         House* house;
         
};


int main()
{
    HouseBuilder* hBuilder = new HouseBuilder();
    hBuilder->CreateKitchen();
    hBuilder->CreateYard();
    hBuilder->CreateRoom();
    hBuilder->CreateRoom();
    House* h = hBuilder->getHouse();
    h->listParts();
}