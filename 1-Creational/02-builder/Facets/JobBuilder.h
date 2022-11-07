#ifndef JOB_H
#define JOB_H

#include<PersonBuilder.h>

class JobBuilder: public PersonBuilder{
    public:
        JobBuilder(std::unique_ptr<Person> p_):PersonBuilder(std::move(p_)){}

        JobBuilder& withJob(std::string occupation_);
    private:

};  


#endif