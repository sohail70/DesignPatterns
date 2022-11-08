#include<iostream>

template<class T>
class Builder;


template<class T>
class InteriorPartBuilder;

template<class T>
class ExteriorPartBuilder;

class Persia;
class Dena;
class Quick;
class Tiba;


class Car
{
    public:
        virtual void operate()  = 0;
        
        virtual ~Car(){};
    protected:
        Car(){};


        // interior part builder
        std::string EngineModel;
        std::string TransmissionModel;

        // exterior part builder
        std::string WheelModel;
        std::string WindModel;

        // friend class Builder;
        friend class InteriorPartBuilder<Persia>;
        friend class ExteriorPartBuilder<Persia>;
        
        friend class InteriorPartBuilder<Dena>;
        friend class ExteriorPartBuilder<Dena>;
        
        friend class InteriorPartBuilder<Quick>;
        friend class ExteriorPartBuilder<Quick>;
        
        friend class InteriorPartBuilder<Tiba>;
        friend class ExteriorPartBuilder<Tiba>;


        friend std::ostream& operator<<(std::ostream& out , const Car& obj)
        {
            out<<"Car with Engine Model "<<obj.EngineModel
                <<" and Transmission Model " << obj.TransmissionModel
                <<" and Wheel Model " <<obj.WheelModel 
                <<" and Wind Model "<<obj.WindModel;
            return out;
        }
};


class IRCar: public Car{
    public:
        virtual void operate()  = 0 ;

        virtual ~IRCar(){};
    protected:
        IRCar(){};
};

class SaipaCar: public Car{
    public:
        virtual void operate() = 0;
        virtual ~SaipaCar(){};
    protected:
        SaipaCar(){};
};



class PersiaFactory;

template<class T> 
class Builder;

class Persia: public IRCar
{   
    public:
        void operate() override
        {
            std::cout<<"Persia is operating \n";
        }

        ~Persia(){};
        static Builder<Persia>* buildPersia(); // zire class build bayad implementation ro benvisi
    private:
        Persia(){};


        friend class Builder<Persia>;

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
        static Builder<Dena>* buildDena(); // zire class build bayad implementation ro benvisi
    private:
        Dena(){};

        friend class Builder<Dena>;

        // friend class DenaFactory;
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
        static Builder<Quick>* buildQuick(); // zire class build bayad implementation ro benvisi
    private:
        Quick(){};

        friend class Builder<Quick>;
        
        // friend class QuickFactory;
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

        static Builder<Tiba>* buildTiba(); // zire class build bayad implementation ro benvisi
    private:
        Tiba(){};

        friend class Builder<Tiba>;
        // friend class TibaFactory;
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
        Car* make() override;
};  

class QuickFactory: public AbstractSaipaFactory{
    public:
        Car* make() override;
};

class TibaFactory: public AbstractSaipaFactory{
    public:
        Car* make() override;
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
template<class T>
class InteriorPartBuilder;

template<class T>
class ExteriorPartBuilder;

template <class T>
class Builder{
    public:
        Builder(){
            c = new T();    
        }
        InteriorPartBuilder<T> interior();
        ExteriorPartBuilder<T> exterior();


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

Builder<Persia>* Persia::buildPersia()
{
    return new Builder<Persia>();
}


Builder<Dena>* Dena::buildDena()
{
    return new Builder<Dena>();
}


Builder<Quick>* Quick::buildQuick()
{
    return new Builder<Quick>();
}

Builder<Tiba>* Tiba::buildTiba()
{
    return new Builder<Tiba>();
}


template<class T>
class InteriorPartBuilder: public Builder<T>{
    public:
        InteriorPartBuilder(Car* c_):Builder<T>(c_) {}

        InteriorPartBuilder& withWheelModel(std::string WheelModel_)
        {
            
            this->c->WheelModel = WheelModel_; // Age this->c nazari error mide chun --> https://stackoverflow.com/questions/4010281/accessing-protected-members-of-superclass-in-c-with-templates
            return *this;
        }

        InteriorPartBuilder& withWindModel(std::string WindModel_)
        {
            this->c->WindModel = WindModel_;
            return *this;
        }
};

template<class T>
class ExteriorPartBuilder: public Builder<T>{
    public:
        ExteriorPartBuilder(Car* c_):Builder<T>(c_) {}
        ExteriorPartBuilder& withEngineModel(std::string EngineModel_)
        {
            this->c->EngineModel = EngineModel_;
            return *this;
        }

        ExteriorPartBuilder& withTransmissionModel(std::string TransmissionModel)
        {
            this->c->TransmissionModel = TransmissionModel;
            return *this;
        }

};
template<class T>
InteriorPartBuilder<T> Builder<T>::interior(){
    return InteriorPartBuilder<T>(c);
}

template<class T>
ExteriorPartBuilder<T> Builder<T>::exterior(){
    return ExteriorPartBuilder<T>(c);
}





Car* PersiaFactory::make()
{
    Car* p = Persia::buildPersia()->interior().withWheelModel("2022").withWindModel("2023").exterior().withEngineModel("V3").withTransmissionModel("automatic");
    return p;
}



Car* DenaFactory::make()
{
    Car* p = Dena::buildDena()->interior().withWheelModel("2022").withWindModel("2023").exterior().withEngineModel("V4").withTransmissionModel("manual");
    return p;
}

Car* QuickFactory::make()
{
    Car* p = Quick::buildQuick()->interior().withWheelModel("2022").withWindModel("2023").exterior().withEngineModel("V5").withTransmissionModel("CVT");
    return p;
}


Car* TibaFactory::make()
{
    Car* p = Tiba::buildTiba()->interior().withWheelModel("2022").withWindModel("2023").exterior().withEngineModel("V6").withTransmissionModel("auto");
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
    std::cout<<*p<<"\n";
    p->operate();

    std::cout<<"-------------------------- \n";

    auto d = cf.make_car("Dena");
    std::cout<<*d<<"\n";
    d->operate();

    std::cout<<"-------------------------- \n";

    auto q = cf.make_car("Quick");
    std::cout<<*q<<"\n";
    q->operate();

    std::cout<<"-------------------------- \n";

    auto t = cf.make_car("Tiba");
    std::cout<<*t<<"\n";
    t->operate();
}