#include<iostream>


class Builder;
class InteriorPartBuilder;
class ExteriorPartBuilder;

class Car
{
    public:
        virtual void operate() {};
        
        virtual ~Car(){};
    protected:
        Car(){};


        // interior part builder
        std::string EngineModel;
        std::string TransmissionModel;

        // exterior part builder
        std::string WheelModel;
        std::string windModel;

        friend class Builder;
        friend class InteriorPartBuilder;
        friend class ExteriorPartBuilder;
};


class IRCar: public Car{
    public:
        virtual void operate(){} ;

        virtual ~IRCar(){};
    protected:
        IRCar(){};
};

class SaipaCar: public Car{
    public:
        virtual void operate(){} ;
        virtual ~SaipaCar(){};
    protected:
        SaipaCar(){};
};



class PersiaFactory;
class Builder;
class Persia: public IRCar
{   
    public:
        void operate() override
        {
            std::cout<<"Persia is operating \n";
        }

        ~Persia(){};
        static Builder* buildPersia(); // zire class build bayad implementation ro benvisi
    private:
        Persia(){};




        // friend class PersiaFactory;
};


class DenaFactory;
class Dena: public IRCar
{
    public:
        void operate() override
        {
            std::cout<<"Dena is operating \n";
        }
        ~Dena(){};
    private:
        Dena(){};


    friend class DenaFactory;
};






class QuickFactory;
class Quick: public SaipaCar
{
    public:
        void operate() override
        {
            std::cout<<"Quick is operating \n";
        }
        ~Quick(){};
    private:
        Quick(){};

        friend class QuickFactory;
};


class TibaFactory;
class Tiba: public SaipaCar
{
    public:
        void operate() override
        {
            std::cout<<"Tiba is operating \n";
        }
        ~Tiba(){};
    private:
        Tiba(){};


        friend class TibaFactory;
};

// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% //
class AbstractCarFactory{
    public:
        AbstractCarFactory(){

        }
        virtual Car* make() = 0 ; 

    protected:

};



class AbstractIRFactory: public AbstractCarFactory
{
    public:
        virtual Car* make() = 0;
};


class AbstractSaipaFactory: public AbstractCarFactory
{
    public:
        virtual Car* make() = 0;
};


class PersiaFactory: public AbstractIRFactory {
    public:
        Car* make() override;
};

class DenaFactory: public AbstractIRFactory{
    public:
        Car* make() override
        {
            return new Dena();
        }
};  

class QuickFactory: public AbstractSaipaFactory{
    public:
        Car* make() override
        {
            return new Quick();
        }
};

class TibaFactory: public AbstractSaipaFactory{
    public:
        Car* make() override
        {
            return new Tiba();
        }
};  


// %%%%%%%%%%%%%%%%%%%%%%%%%%%%
#include<map>
class CarFactory{
    public:
        CarFactory(){
            carFac["Persia"] = new PersiaFactory();
            carFac["Dena"] = new DenaFactory();
            carFac["Quick"] = new QuickFactory();
            carFac["Tiba"] = new TibaFactory();
        }

        Car* make_car(std::string model)
        {
            return carFac[model]->make();
        }   
    private:
        std::map<std::string , AbstractCarFactory*> carFac;
};


//  %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%build implementation %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% //
class InteriorPartBuilder;
class ExteriorPartBuilder;
class Builder{
    public:
        Builder(){
            c = new Car();
            
        }
        InteriorPartBuilder interior();
        ExteriorPartBuilder exterior();


        operator Car*()
        {
            return c;
        }
    protected:
        Car* c;
        Builder(Car* car_){
            c = car_;
        }

};

Builder* Persia::buildPersia()
{
    return new Builder();
}


class InteriorPartBuilder: public Builder{
    public:
        InteriorPartBuilder(Car* c_):Builder(c_) {}

        InteriorPartBuilder& withWheelModel(std::string wheelModel_)
        {
            
            c->WheelModel = wheelModel_;
            return *this;
        }

        InteriorPartBuilder& withWindModel(std::string windModel_)
        {
            c->windModel = windModel_;
            return *this;
        }
};

class ExteriorPartBuilder: public Builder{
    public:
        ExteriorPartBuilder(Car* c_):Builder(c_) {}
        ExteriorPartBuilder& withEngineModel(std::string engineModel_)
        {
            c->EngineModel = engineModel_;
            return *this;
        }

        ExteriorPartBuilder& withTransmissionModel(std::string windModel_)
        {
            c->windModel = windModel_;
            return *this;
        }

};

InteriorPartBuilder Builder::interior(){
    return InteriorPartBuilder(c);
}

ExteriorPartBuilder Builder::exterior(){
    return ExteriorPartBuilder(c);
}





Car* PersiaFactory::make()
{
    // return new Persia(); // age mikhay az builder estefade kuni injoori nabayad new kuni balke inja bayad build ro farakhani kuni
    Car* p = Persia::buildPersia()->interior().withWheelModel("2022").withWindModel("2021");
    return p;
}


int main()
{
    // CarFactory cf;
    // auto p = cf.make_car("Persia");
    // p->operate();
    // auto d = cf.make_car("Dena");
    // d->operate();
    
    // auto q = cf.make_car("Quick");
    // q->operate();
    // auto t = cf.make_car("Tiba");
    // t->operate();

    ///////////////////////////////////////
    CarFactory cf;
    auto p = cf.make_car("Persia");
    p->operate();
}