#include<ProfileBuilder.h>


std::unique_ptr<ProfileBuilder>  ProfileBuilder::withColor(std::string color_)
{
    p->color = color_;
    return std::unique_ptr<ProfileBuilder>(this);
}

std::unique_ptr<ProfileBuilder> ProfileBuilder::withGender(std::string gender_)
{
    p->gender = gender_;
    return std::unique_ptr<ProfileBuilder>(this);
}

std::unique_ptr<ProfileBuilder> ProfileBuilder::withName(std::string name_)
{
    p->name = name_;
    return std::unique_ptr<ProfileBuilder>(this);
}




std::unique_ptr<ProfileBuilder> ProfileBuilder::withAge(std::string age_)
{
    p->age = age_;
    return std::unique_ptr<ProfileBuilder>(this);
}

std::unique_ptr<ProfileBuilder>ProfileBuilder::withHeight(std::string height_ )
{
    p->height = height_;
    return std::unique_ptr<ProfileBuilder>(this);
}

std::unique_ptr<ProfileBuilder> ProfileBuilder::withEducation(std::string education_ )
{
    p->education = education_ ; 
    return std::unique_ptr<ProfileBuilder>(this);
}