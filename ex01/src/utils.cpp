#include "PhoneBook.hpp"

void check_eof(void)
{
    if (std::cin.eof())
    {
        std::cout << "\nYou pressed STRG+D, PhoneBook will close.\n";
        exit(EXIT_SUCCESS);
    }
}
