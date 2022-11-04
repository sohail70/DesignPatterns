#ifndef ETHNICITY_H
#define ETHNICITY_H

#include<PersonBuilder.h>

class EthnicityBuilder: public PersonBuilder{
    public:
        EthnicityBuilder(){}

        EthnicityBuilder& withNationality(std::string nationality_);
        EthnicityBuilder& withLanguage(std::string language_);
};  


#endif