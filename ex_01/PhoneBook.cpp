#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : nextIndex(0), countContact(0)
{
}

static bool isBlank(std::string str)
{
    int i = 0;

    while (str[i])
    {
        if (str[i] != ' ' && str[i] != '\t')
            return (false);
        i++;
    }
    return (true);
}

static std::string shortenField(std::string field)
{
    if (field.length() > 10)
        return field.substr(0, 9) + '.';
    else
        return field;
}

void PhoneBook::addContact()
{
    std::string first;
    std::string last;
    std::string Nickn;
    std::string num;
    std::string secret;

    std::cout << "\n";
    std::cout << "Add Contact";
    std::cout << "\n";
    while(isBlank(first))
    {
        std::cout << "First name: ";
        if (!std::getline(std::cin, first))
            return;
    }
    while(isBlank(last))
    {
        std::cout << "Last name: ";
        if (!std::getline(std::cin, last))
            return;
    }
    while(isBlank(Nickn))
    {
        std::cout << "Nick name: ";
        if (!std::getline(std::cin, Nickn))
            return;
    }
    while(isBlank(num))
    {
        std::cout << "Number: ";
        if (!std::getline(std::cin, num))
            return;
    }
    while(isBlank(secret))
    {
        std::cout << "Secret: ";
        if (!std::getline(std::cin, secret))
            return;
    }
    contacts[nextIndex].setFirstName(first);
    contacts[nextIndex].setLastName(last);
    contacts[nextIndex].setNickName(Nickn);
    contacts[nextIndex].setNum(num);
    contacts[nextIndex].setSecret(secret);
    nextIndex = (nextIndex + 1) % 8;
    if (countContact < 8)
        countContact++;
}

static void print_contact_details(int index, Contact contacts[8])
{
    std::cout << "\n";
    std::cout << "Contact Details";
    std::cout << "\n";
    std::cout << "First name: " << contacts[index].getFirstName() << std::endl;
    std::cout << "Last name: " << contacts[index].getLastName() << std::endl;
    std::cout << "Nick name: " << contacts[index].getNickName() << std::endl;
    std::cout << "Phone Number: " << contacts[index].getNum() << std::endl;
    std::cout << "Darkest Secret: " << contacts[index].getSecret() << std::endl;
}

static void print_contact_list(Contact contacts[8], int count)
{
    std::cout << "\n";
    std::cout << std::setw(10) << std::right << "Index" << "|";
    std::cout << std::setw(10) << std::right << "First name" << "|";
    std::cout << std::setw(10) << std::right << "Last name" << "|";
    std::cout << std::setw(10) << std::right << "Nickname" << "\n";
    for (int i = 0; i < count; i++)
    {
        std::cout << std::setw(10) << std::right << i << "|";
        std::cout << std::setw(10) << std::right << shortenField(contacts[i].getFirstName()) << "|";
        std::cout << std::setw(10) << std::right << shortenField(contacts[i].getLastName()) << "|";
        std::cout << std::setw(10) << std::right << shortenField(contacts[i].getNickName());
        std::cout << "\n";
    }
    std::cout << "\n";
}

void PhoneBook::searchContact()
{
    std::string index;
    
    print_contact_list(contacts, countContact);
    std::cout << "Enter index: ";
    std::getline(std::cin, index);

    if (index.length() != 1 || index[0] < '0' || index[0] > '7')
    {
        std::cout << "Invalid index." << std::endl;
        return;
    }
    int i = index[0] - '0';
    if (i >= countContact)
    {
        std::cout << "Invalid index." << std::endl;
        return;
    }
    print_contact_details(i, contacts);
    std::cout << "\nPress enter to continue...";
    std::string dummy;
    std::getline(std::cin, dummy);
}