#ifndef PERSON_BUILDER_H
#define PERSON_BUILDER_H


#include<Person.h>



class Person;
class AddressBuilder;
class EthnicityBuilder;
class JobBuilder;
class ProfileBuilder;

class PersonBuilder{
    public:
        PersonBuilder();
        
        std::unique_ptr<AddressBuilder> Address();
        std::unique_ptr<EthnicityBuilder> Ethnicity();
        std::unique_ptr<JobBuilder> Job();
        std::unique_ptr<ProfileBuilder> Profile();

        operator std::unique_ptr<Person>() 
        {
            return std::move(p);
        }
    protected:
        std::unique_ptr<Person> p;
        
};

#endif