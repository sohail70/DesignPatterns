#ifndef PROFILE_BUILDER_H
#define PROFILE_BUILDER_H

#include<PersonBuilder.h>


class ProfileBuilder: public PersonBuilder{
    public:
        ProfileBuilder(){}

        ProfileBuilder& withColor(std::string color_);
        ProfileBuilder& withGender(std::string gender_);
        ProfileBuilder& withName(std::string name_);
};  


#endif