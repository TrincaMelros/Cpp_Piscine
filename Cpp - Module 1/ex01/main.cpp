#include "Zombie.hpp"
#include <string>

int main()
{
    Zombie* z;
    int     i;
    int     num_zombies;

    num_zombies = 7;
    z = zombieHorde(num_zombies, "Joao");
    i = 0;
    while (i < num_zombies)
    {
        z[i].announce();
        i++;
    }
    delete [] z;
    return(0);
}