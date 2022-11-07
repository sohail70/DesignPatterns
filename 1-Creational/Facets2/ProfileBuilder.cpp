#include<ProfileBuilder.h>


ProfileBuilder::ProfileBuilder(std::unique_ptr<Person> p_): PersonBuilder(std::move(p_))
{
    std::cout<<"\n";
}

ProfileBuilder& ProfileBuilder::addName(std::string name_)
{
    p->name = name_;
    return *this;
}