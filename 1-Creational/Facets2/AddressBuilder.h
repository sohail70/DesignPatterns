#ifndef ADDRESS_BUILDER_H
#define ADDRESS_BUILDER_H

#include<PersonBuilder.h>

class AddressBuilder: public PersonBuilder{
    public:

        AddressBuilder(std::unique_ptr<Person> p_);


        AddressBuilder& addAddress(std::string address_);
    private:


};


#endif