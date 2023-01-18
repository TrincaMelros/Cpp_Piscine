#include "Zombie.Class.hpp"

Zombie::Zombie(void)
{
    std::cout << "Zombie constructor called" << std::endl;
}

Zombie::~Zombie(void)
{
    std::cout << "Zombie destructor called" << std::endl;
}

void    Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}