#include<EthnicityBuilder.h>

EthnicityBuilder& EthnicityBuilder::withNationality(std::string nationality_)
{
    p->nationality = nationality_;
    return *this;
}


EthnicityBuilder& EthnicityBuilder::withLanguage(std::string language_)
{
    p->language = language_;
    return *this;
}