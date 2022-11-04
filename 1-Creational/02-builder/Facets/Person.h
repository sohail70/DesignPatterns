#ifndef PERSON_H
#define PERSON_H

#include<iostream>
#include<memory>
#include<PersonBuilder.h>


class PersonBuilder;
class AddressBuilder;
class EthnicityBuilder;
class JobBuilder;
class ProfileBuilder;
// A class with so many attributes --> we are gonna build a person object step by step and not in this class
class Person{
    public:
    static std::unique_ptr<PersonBuilder> build();
        Person(){}

    private:

        std::string color;
        std::string gender;
        std::string name;

        std::string nationality;
        std::string language;

        std::string city;
        std::string country;
        std::string street;

        std::string occupation;
        
        std::string height;
        std::string age;
        std::string education;

        friend std::ostream& operator<< (std::ostream& out , Person& obj)
        {
            out <<"name: "<<obj.name<<"\n"
                <<"gender: "<<obj.gender<<"\n"
                <<"color: "<<obj.color<<"\n"
                <<"city: "<<obj.city<<"\n"
                <<"country: "<<obj.country<<"\n"
                <<"street: "<<obj.street<<"\n"
                <<"nationality: "<<obj.nationality<<"\n"
                <<"language: "<<obj.language<<"\n"
                <<"occupation: "<<obj.occupation<<"\n"
                <<"height: "<<obj.height<<"\n"
                <<"age: "<<obj.age<<"\n"
                <<"education: "<<obj.education<<"\n";
            return out;
        }

        
        friend class PersonBuilder;
        friend class AddressBuilder;
        friend class EthnicityBuilder;
        friend class JobBuilder;
        friend class ProfileBuilder;
};

#endif