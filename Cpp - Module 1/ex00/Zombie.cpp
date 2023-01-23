#include "Zombie.hpp"

Zombie::Zombie(std::string n) : name(n)
{
    std::cout << "Zombie constructor called" << std::endl;
}

Zombie::~Zombie(void)
{
    std::cout << "Zombie " << name << " destructor called" << std::endl;
}

void    Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}