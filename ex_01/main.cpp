#include "PhoneBook.hpp"

int main()
{
    PhoneBook book;
    std::string command;

    while (true)
    {
        std::cout << "\n";
        std::cout << "Select an option: ADD, SEARCH, EXIT" << "\n";
        std::cout << "Enter command: ";
        if (!std::getline(std::cin, command))
            break;
        if (command == "ADD")
            book.addContact();
        else if (command == "SEARCH")
            book.searchContact();
        else if (command == "EXIT")
            break;
    }
    return 0;
}