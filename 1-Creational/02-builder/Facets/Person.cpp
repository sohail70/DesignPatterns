#include<Person.h>
#include<memory>

std::unique_ptr<PersonBuilder> Person::build(){
    return std::make_unique<PersonBuilder>();
}