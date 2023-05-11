#include "Zombie.hpp"
#include <string>

Zombie* zombieHorde(int N, std::string name)
{
    int     i;
    Zombie* z = new Zombie[N];

    i = 0;
    while (i < N)
    {
        z[i].givename(name);
        i++;
    }
    return(z);
}