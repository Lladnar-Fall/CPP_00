#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact
{
    private:
        std::string firstName;
        std::string lastName;
        std::string nickName;
        std::string num;
        std::string secret;
    
    public:
        void setFirstName(std::string name);
        std::string getFirstName() const;

        void setLastName(std::string name);
        std::string getLastName() const;

        void setNickName(std::string name);
        std::string getNickName() const;

        void setNum(std::string num);
        std::string getNum() const;

        void setSecret(std::string name);
        std::string getSecret() const;
};


#endif