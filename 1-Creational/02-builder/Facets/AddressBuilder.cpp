#include<AddressBuilder.h>


AddressBuilder& AddressBuilder::inCity(std::string city_)
{
    p->city = city_;
    return *this;
}

AddressBuilder& AddressBuilder::inCountry(std::string country_)
{
    p->country = country_;
    return *this;
}

AddressBuilder& AddressBuilder::inStreet(std::string street_)
{
    p->street = street_;
    return *this;
}