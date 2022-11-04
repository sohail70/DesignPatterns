// see https://stackoverflow.com/questions/5319906/error-expected-class-name-before-token for circular dependency and ...

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
                                                .Job()->withJob("Software developer")
                                                .Profile()->withName("Soheil Enia").withGender("Male").withColor("White");
    std::cout<<*p.get()<<"\n";
    
}