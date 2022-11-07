#include<AddressBuilder.h>


AddressBuilder::AddressBuilder(std::unique_ptr<Person> p_): PersonBuilder(std::move(p_))
{
    std::cout<<"\n";
}


AddressBuilder& AddressBuilder::addAddress(std::string address_)
{
    p->address = address_;
    return *this;
}