// see https://stackoverflow.com/questions/5319906/error-expected-class-name-before-token for circular dependency and ...

// ya cmakelist benvis ya ba dastore:  g++ *.cpp -o main -I "/home/sohail/Design Patterns/1-Creational/02-builder/Facets/" --> kole cpp haro build mikune va header file ha ham include shode ba -I
#include<iostream>
#include<Person.h>
#include<AddressBuilder.h>
#include<EthnicityBuilder.h>
#include<PersonBuilder.h>
#include<JobBuilder.h>
#include<ProfileBuilder.h>
int main()
{
    std::unique_ptr<Person> p  = Person::build()->Address()->inCity("Tehran").inCountry("Iran").inStreet("Delavaran")
                                                .Ethnicity()->withLanguage("Farsi").withNationality("Iranian")
                                                .Profile()->withName("Soheil Enia")->withGender("Male")->withColor("White")
                                                ->Job()->withJob("Software developer");


    std::cout<<*p.get()<<"\n";
    
}