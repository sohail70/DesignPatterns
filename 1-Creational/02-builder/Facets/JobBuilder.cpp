#include<JobBuilder.h>

JobBuilder& JobBuilder::withJob(std::string occupation_)
{
    p->occupation = occupation_;
    return *this;
}