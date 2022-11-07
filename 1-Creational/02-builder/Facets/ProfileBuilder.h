#ifndef PROFILE_BUILDER_H
#define PROFILE_BUILDER_H

#include<PersonBuilder.h>


class ProfileBuilder: public PersonBuilder{
    public:
        ProfileBuilder(std::unique_ptr<Person> p_):PersonBuilder(std::move(p_)){}

        std::unique_ptr<ProfileBuilder> withColor(std::string color_);
        std::unique_ptr<ProfileBuilder> withGender(std::string gender_);
        std::unique_ptr<ProfileBuilder> withName(std::string name_);
        std::unique_ptr<ProfileBuilder> withAge(std::string age_);
        std::unique_ptr<ProfileBuilder> withHeight(std::string height_ );
        std::unique_ptr<ProfileBuilder> withEducation(std::string education_ );
};  


#endif