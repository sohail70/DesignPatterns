#include<iostream>




class Singleton{
    public:
        static Singleton* getInstance(std::string value_)
        {
            if(instance == nullptr)
                instance = new Singleton(value_);
            
            return instance;
        }

        void func()
        {
            std::cout<<value<<"\n";
        }

        Singleton(Singleton& other) = delete;
        Singleton operator=(const Singleton& other) = delete;

    private:
        Singleton(std::string value_):value(value_){}
        static Singleton* instance;
        std::string value;
};
Singleton* Singleton::instance = nullptr;



int main()
{
    auto name = Singleton::getInstance("Soheil");
    name->func();
    auto name2 = Singleton::getInstance("Saman");
    name->func();
}