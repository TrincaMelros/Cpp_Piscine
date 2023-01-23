#include "Zombie.hpp"

Zombie::Zombie() : _name("Zed")
{
    std::cout << "Zombie constructor called" << std::endl;
}

Zombie::Zombie(std::string n) : _name(n)
{
    std::cout << "Zombie constructor called" << std::endl;
}

Zombie::~Zombie(void)
{
    std::cout << "Zombie " << _name << " destructor called" << std::endl;
}

void    Zombie::announce(void)
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::givename(std::string name)
{
    _name = name;
}
