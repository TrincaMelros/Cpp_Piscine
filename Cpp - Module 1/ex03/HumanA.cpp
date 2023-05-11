#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
    std::cout << "HumanA " << _name << " was created with a " << _weapon.getType() << std::endl;
}

HumanA::~HumanA(void)
{
    std::cout << "HumanA " << _name << " destructor called" << std::endl;
}

void    HumanA::attack()
{
    std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}