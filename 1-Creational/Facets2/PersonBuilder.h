#ifndef PERSON_BUILDER
#define PERSON_BUILDER
#include<memory>
#include<Person.h>

class ProfileBuilder;
class AddressBuilder;
class PersonBuilder{
    public:
        PersonBuilder();
        virtual ~PersonBuilder(){};

        
        std::unique_ptr<ProfileBuilder> Profile();
        std::unique_ptr<AddressBuilder> Address();

        operator std::unique_ptr<Person>()
        {
            return std::move(p);
        }
    protected:
        std::unique_ptr<Person> p;
        PersonBuilder(std::unique_ptr<Person> p_);
};

#endif