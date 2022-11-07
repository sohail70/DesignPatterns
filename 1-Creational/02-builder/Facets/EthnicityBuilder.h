#ifndef ETHNICITY_H
#define ETHNICITY_H

#include<PersonBuilder.h>

class EthnicityBuilder: public PersonBuilder{
    public:
        EthnicityBuilder(std::unique_ptr<Person> p_):PersonBuilder(std::move(p_)){}

        EthnicityBuilder& withNationality(std::string nationality_);
        EthnicityBuilder& withLanguage(std::string language_);
};  


#endif