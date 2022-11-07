#include<iostream>
#include<mutex>
#include<thread>
#include<chrono>

class Singleton{
    public:
        static Singleton* getInstance(std::string value_)
        {
            std::lock_guard<std::mutex> lock(mutex);
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
        static std::mutex mutex;
        std::string value;
};
Singleton* Singleton::instance = nullptr;
std::mutex Singleton::mutex;


void func1()
{
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    auto soheil = Singleton::getInstance("Soheil");
    soheil->func();
}


void func2()
{
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    auto saman = Singleton::getInstance("Saman");
    saman->func();
}

int main()
{
    auto t1 = std::thread(&func1);
    auto t2 = std::thread(&func2);

    t1.join();
    t2.join();

}