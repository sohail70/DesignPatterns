#ifndef ADDRESS_H
#define ADDRESS_H

#include<PersonBuilder.h>
class PersonBuilder;
class AddressBuilder: public PersonBuilder{
    public:
        AddressBuilder(std::unique_ptr<Person> p_):PersonBuilder(std::move(p_)){}

        AddressBuilder& inCity(std::string city_);
        AddressBuilder& inCountry(std::string country_);
        AddressBuilder& inStreet(std::string street_);
};  



#endif