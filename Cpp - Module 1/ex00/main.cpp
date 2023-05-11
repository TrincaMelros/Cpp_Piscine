#include "Zombie.hpp"
#include <string>

int main()
{
    Zombie *f;

    randomChump("Michael");

    f = newZombie("Johnny");
    f->announce();
    delete f;
    return(0);
}