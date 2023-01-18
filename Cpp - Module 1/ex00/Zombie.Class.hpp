#ifndef ZOMBIE_CLASS_H
#define ZOMBIE_CLASS_H

#include <string>
#include <iostream>

class   Zombie {
private:
    std::string name;
public:
    Zombie(void);
    ~Zombie(void);

    void    announce(void);
};

#endif