#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>
#include <iostream>

class   Zombie {
private:
    std::string name;
public:
    Zombie(std::string n);
    ~Zombie(void);

    void    announce(void);
};

void    randomChump(std::string name);
Zombie* newZombie(std::string name);

#endif