#ifndef JOB_H
#define JOB_H

#include<PersonBuilder.h>

class JobBuilder: public PersonBuilder{
    public:
        JobBuilder(){}

        JobBuilder& withJob(std::string occupation_);
    private:

};  


#endif