#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <string>
#include <iostream>
#include <iomanip>

class PhoneBook
{
    private:
        Contact contacts[8];
        int nextIndex;
        int countContact;

    public:
        PhoneBook();
        void addContact();
        void searchContact();
};

#endif
