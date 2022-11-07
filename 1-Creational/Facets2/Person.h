#ifndef PERSON_H
#define PERSON_H


#include<iostream>
#include<memory>
class PersonBuilder;
class AddressBuilder;
class Person{
    public:
        static PersonBuilder build();
        
    private:
        Person(){}
        friend std::unique_ptr<Person> std::make_unique<Person>();
        friend class ProfileBuilder;
        friend class AddressBuilder;

        friend std::ostream& operator<<(std::ostream& out , Person& p)
        {
            out<<"name: "<<p.name<<"\n"
               <<"Address: "<<p.address<<"\n" ;
            return out;
        }

        std::string name;
        std::string address;
};


#endif