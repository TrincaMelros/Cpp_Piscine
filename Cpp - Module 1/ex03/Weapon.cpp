#include "Weapon.hpp"

Weapon::Weapon(void)
{
    std::cout << "Weapon constructor called" << std::endl;
}

Weapon::Weapon(std::string w) : _type(w)
{
    std::cout << "Weapon constructor called" << std::endl;
}


Weapon::~Weapon(void)
{
    std::cout << "Weapon destructor called" << std::endl;
}

const std::string&  Weapon::getType()
{
    return (_type);
}

void    Weapon::setType(std::string type)
{
    _type = type;
}

