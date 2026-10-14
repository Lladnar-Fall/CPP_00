#include "Contact.hpp"

void Contact::setFirstName(std::string name)
{
    this->firstName = name;
}

void Contact::setLastName(std::string name)
{
    this->lastName = name;
}

void Contact::setNickName(std::string name)
{
    this->nickName = name;
}
void Contact::setNum(std::string num)
{
    this->num = num;
}

void Contact::setSecret(std::string name)
{
    this->secret = name;
}

std::string Contact::getFirstName() const
{
    return this->firstName;
}

std::string Contact::getLastName() const
{
    return this->lastName;
}

std::string Contact::getNickName() const
{
    return this->nickName;
}

std::string Contact::getNum() const
{
    return this->num;
}

std::string Contact::getSecret() const
{
    return this->secret;
}