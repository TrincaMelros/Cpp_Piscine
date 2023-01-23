#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

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