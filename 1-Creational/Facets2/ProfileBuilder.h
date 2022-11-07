#ifndef PROFILE_BUILDER_H 
#define PROFILE_BUILDER_H

#include<PersonBuilder.h>
class ProfileBuilder: public PersonBuilder{
    public:
        ProfileBuilder(std::unique_ptr<Person> p_);
        ProfileBuilder& addName(std::string name_);
        ~ProfileBuilder(){};
    private:

};  

#endif