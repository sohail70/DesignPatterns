#include<iostream>


class Worker{
    public:
        Worker(){};
        virtual ~Worker(){}

        virtual void working() = 0;
    protected:
       std::string gender;
       std::string occupation;
       
};


class Teacher: public Worker{
    public:
        Teacher(){
            gender = std::string("Female");
            occupation = std::string("Teacher");
        };

        void working()
        {
            std::cout<<"I'm Teaching"<<"\n";
        }
        ~Teacher(){};
    private:
        
};


class Plumber: public Worker{
    public:
        Plumber(){
            gender = std::string("Male");
            occupation = std::string("Plumber");
        };

        void working()
        {
            std::cout<<"I'm plumbing"<<"\n";
        }
        ~Plumber(){};

    private:
        
};  








class WorkerFactory{
    public:
        virtual Worker* make_worker() = 0 ;
};  

class TeacherFactory: public WorkerFactory
{
    public:
        Worker* make_worker()
        {
            return new Teacher();
        }
};

class PlumberFactory: public WorkerFactory
{
    public:
        Worker* make_worker()
        {
            return new Plumber();
        }
};


#include<vector>
class Factory{
    public:
        Factory(){
            workers.push_back(new TeacherFactory() );
            workers.push_back(new PlumberFactory() );
        }
        Worker* make(int i)
        {
            return workers[i]->make_worker();
        }
    private:
        std::vector<WorkerFactory*> workers;
};

int main()
{
    Factory c;
    auto worker = c.make(0);
    worker->working();
    std::cout<<"\n";


}