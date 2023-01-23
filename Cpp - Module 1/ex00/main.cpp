#include "Zombie.hpp"
#include <string>

int main()
{
    Zombie z("Miguel");
    Zombie *f;

    z.announce();

    f = newZombie("Johnny");
    f->announce();
    delete f;
    return(0);
}