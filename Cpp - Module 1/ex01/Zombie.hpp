#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>
#include <iostream>

class   Zombie {
private:
    std::string _name;
public:
    Zombie(void);
    Zombie(std::string n);
    ~Zombie(void);

    void    announce(void);
    void    givename(std::string);
};

Zombie* zombieHorde(int N, std::string name);

#endif