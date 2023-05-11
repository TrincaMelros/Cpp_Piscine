#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <string>
#include <iostream>

class   ClapTrap{
    private:
        std::string _name;
        int         _hitpoints;
        int         _energypoints;
        int         _attackdamage;
    public:
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap& c);
        ClapTrap& operator=(const ClapTrap& c);
        ~ClapTrap();

        void        attack(const std::string& target);
        void        takeDamage(unsigned int amount);
        void        beRepaired(unsigned int amount);

        std::string getName();
        int         getHitpoints();
        int         getEnergypoints();
        int         getAttackdamage();

        void        setHitpoints(int amount);
        void        setEnergypoints(int amount);
        void        setAttackdamage(int amount);
};

#endif