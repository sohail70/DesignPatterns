#include<ProfileBuilder.h>


ProfileBuilder& ProfileBuilder::withColor(std::string color_)
{
    p->color = color_;
    return *this;
}

ProfileBuilder& ProfileBuilder::withGender(std::string gender_)
{
    p->gender = gender_;
    return *this;
}

ProfileBuilder& ProfileBuilder::withName(std::string name_)
{
    p->name = name_;
    return *this;
}