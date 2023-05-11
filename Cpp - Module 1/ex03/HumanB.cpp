#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
    std::cout << "HumanB " << _name << " was created with no weapon." << std::endl;
}

HumanB::~HumanB(void)
{
    std::cout << "HumanB " << _name << " destructor called" << std::endl;
}

void    HumanB::attack()
{
    std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &weapon)
{
    _weapon = &weapon;
}