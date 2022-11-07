#include<PersonBuilder.h>


#include<AddressBuilder.h>
#include<EthnicityBuilder.h>
#include<JobBuilder.h>
#include<ProfileBuilder.h>



PersonBuilder::PersonBuilder()
{
    p = std::make_unique<Person>();
}


PersonBuilder::PersonBuilder(std::unique_ptr<Person> p_)
{
    p = std::move(p_);
}
std::unique_ptr<AddressBuilder> PersonBuilder::Address()
{
    return std::make_unique<AddressBuilder>(std::move(p));
}

std::unique_ptr<EthnicityBuilder> PersonBuilder::Ethnicity()
{
    return std::make_unique<EthnicityBuilder>(std::move(p));
}

std::unique_ptr<JobBuilder> PersonBuilder::Job(){
    return std::make_unique<JobBuilder>(std::move(p));
}

std::unique_ptr<ProfileBuilder> PersonBuilder::Profile(){
    return std::make_unique<ProfileBuilder>(std::move(p));
}