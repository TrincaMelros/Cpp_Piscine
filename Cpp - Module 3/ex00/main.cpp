#include "Claptrap.hpp"

int     main()
{
    ClapTrap a("Michel");
    ClapTrap b(a);

    a.attack("John");
    a.beRepaired(2);
    std::cout << a.getHitpoints() << std::endl;
    a.takeDamage(2);
    std::cout << a.getHitpoints() << std::endl;

    return (0);
}