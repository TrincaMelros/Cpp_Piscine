#include "Harl.hpp"

Harl::Harl(void)
{
    std::cout << "[CONSTRUCTOR] Harl's here! *KRAW* *KRAW*" << std::endl;
}

Harl::~Harl(void)
{
    std::cout << "[DESTRUCTOR] Harl out y'all *KRAW* *KRAW*" << std::endl;
}

void    Harl::debug(void)
{
    std::cout << "It's debug time mfuckers" << std::endl;
}

void    Harl::info(void)
{
    std::cout << "I ain't got no info for y'all" << std::endl;
}

void    Harl::warning(void)
{
    std::cout << "WARNING, IT'S ABOUT TO GO DOWN" << std::endl;
}

void    Harl::error(void)
{
    std::cout << "ABORT, ABORT, ERROR UP IN THIS BITCH" << std::endl;
}

void    Harl::complain(std::string level)
{
    void        (Harl::*funcPtr[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string comment[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int         i;

    i = 0;
    while (i < 4)
    {
        if (comment[i] == level)
        {
            (this->*funcPtr[i])();
            break;
        }
        i++;
    }
}