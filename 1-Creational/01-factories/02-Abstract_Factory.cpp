#include<iostream>


class AbstractWorker{
    public:


        virtual void Exec()  = 0;
        virtual ~AbstractWorker(){};
    protected:
        AbstractWorker(){};
        

        std::string gender;
        int age;    
};


class Teacher: public AbstractWorker{
    public:
        

        void Exec() override
        {
            std::cout<<"I'm Teaching \n";
        }
    private:
        Teacher(){}
        ~Teacher(){}
    

    friend class TeacherFactory;


};


class Plumber: public AbstractWorker{
    public:

        void Exec() override
        {
            std::cout<<"I'm Plumbing \n";
        }
    private:
        Plumber(){}
        ~Plumber(){}

    friend class PlumberFactory;
};

//////////////////////////////////

class AbstractWorkerFactory{
    public:
        virtual AbstractWorker*  make() = 0;
    protected:
        AbstractWorkerFactory(){};
        virtual ~AbstractWorkerFactory(){};
};

class TeacherFactory: public AbstractWorkerFactory{

    public:
        AbstractWorker* make() override
        {
            return new Teacher();
        }
    private:
        TeacherFactory(){};
        virtual ~TeacherFactory(){};

        friend class WorkerFactory;
};


class PlumberFactory: public AbstractWorkerFactory{
    public:
        AbstractWorker* make() override
        {
            return new Plumber();
        }
    private:
        PlumberFactory(){};
        virtual ~PlumberFactory(){};

        friend class WorkerFactory;
};
////////////////////////////////////
#include<map>
class WorkerFactory{
    public:
        WorkerFactory()
        {
            workers_factory["Teacher"] = new TeacherFactory();
            workers_factory["Plumber"] = new PlumberFactory();
        }

        AbstractWorker* CreateWorker(std::string occupation)
        {
            return workers_factory[occupation]->make();
        }

    private:
        std::map<std::string , AbstractWorkerFactory*> workers_factory;
        
};


///////////////////////////////////
int main()
{
    WorkerFactory Factory;
    auto t = Factory.CreateWorker("Teacher");
    t->Exec();

    delete t;
}