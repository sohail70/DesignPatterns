#include<PersonBuilder.h>
#include<Person.h>
// https://stackoverflow.com/questions/33905030/how-to-make-stdmake-unique-a-friend-of-my-class --> make unique friend problem
#include<ProfileBuilder.h>
#include<AddressBuilder.h>
PersonBuilder::PersonBuilder()
{
    p = std::make_unique<Person>();
}


PersonBuilder::PersonBuilder(std::unique_ptr<Person> p_)
{
   p = std::move(p_);
}



std::unique_ptr<ProfileBuilder> PersonBuilder::Profile()
{
    return std::make_unique<ProfileBuilder>(std::move(p));
}


std::unique_ptr<AddressBuilder> PersonBuilder::Address()
{
    return std::make_unique<AddressBuilder>(std::move(p));
}