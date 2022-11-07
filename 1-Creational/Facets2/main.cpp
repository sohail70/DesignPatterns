// https://stackoverflow.com/questions/625799/resolve-build-errors-due-to-circular-dependency-amongst-classes ---> for circular dependency

#include<Person.h>
#include<PersonBuilder.h>
#include<ProfileBuilder.h>
#include<AddressBuilder.h>
int main()
{
    std::unique_ptr<Person> p = Person::build().Profile()->addName("Soheil")
                                .Address()->addAddress("Tehran");
                                ;
    std::cout<<*p.get()<<"\n";
}