#include "Claptrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name)
{
    _hitpoints = 10;
    _energypoints = 10;
    _attackdamage = 0;
    std::cout << "Constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& c)
{
    _name = c._name;
    _hitpoints = c._hitpoints;
    _energypoints = c._energypoints;
    _attackdamage = c._attackdamage;

    std::cout << "Copy Constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& c)
{
    _name = c._name;
    _hitpoints = c._hitpoints;
    _energypoints = c._energypoints;
    _attackdamage = c._attackdamage;

    std::cout << "Copy assignment operator called" << std::endl;

    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}

/* __________ */

void    ClapTrap::attack(const std::string& target)
{
    if (_energypoints == 0)
        std::cout << "ClapTrap " << _name << " has no energy points left, it's doomed!" << std::endl;
    setEnergypoints(_energypoints - 1);
    std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackdamage << " points of damage!" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    _hitpoints -= amount;
    std::cout << "ClapTrap " << _name << " took " << amount << " damage. That hurts! It now has " << _hitpoints << " hitpoints." << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (_energypoints == 0)
        std::cout << "ClapTrap " << _name << " has no energy points left, it's doomed!" << std::endl;
    _hitpoints += amount;
    std::cout << "Claptrap " << _name << " repairs itself, and now has " << _hitpoints << " hitpoints." << std::endl;
}

/* __________ */

std::string ClapTrap::getName()
{
    return (_name);
}

int         ClapTrap::getHitpoints()
{
    return (_hitpoints);
}

int         ClapTrap::getEnergypoints()
{
    return (_energypoints);
}

int         ClapTrap::getAttackdamage()
{
    return (_attackdamage);
}

/* __________ */

void        ClapTrap::setHitpoints(int amount)
{
    _hitpoints = amount;
}

void        ClapTrap::setEnergypoints(int amount)
{
    _energypoints = amount;
}

void        ClapTrap::setAttackdamage(int amount)
{
    _attackdamage = amount;
}