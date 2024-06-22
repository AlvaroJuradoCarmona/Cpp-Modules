#include "ClapTrap.hpp"

ClapTrap::ClapTrap() :
    name("Pedro"),
    hitPoints(10),
    energyPoints(10),
    attackDamage(0)
{
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) :
    name(name),
    hitPoints(10),
    energyPoints(10),
    attackDamage(0)
{
    std::cout << "ClapTrap name constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& ct)
{
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = ct;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator = (const ClapTrap& f)
{
    std::cout << "ClapTrap assignation operator called" << std::endl;
    this->name = f.name;
    this->hitPoints = f.hitPoints;
    this->energyPoints = f.energyPoints;
    this->attackDamage = f.attackDamage;
    return *this;
}

std::string ClapTrap::getName()
{
    return this->name;
}

unsigned int ClapTrap::getAttackDamage()
{
    return this->attackDamage;
}

void ClapTrap::setName(std::string name)
{
    this->name = name;
}

void ClapTrap::setAttackDamage(unsigned int attackDamage)
{
    this->attackDamage = attackDamage;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->attackDamage == 0)
    {
        std::cout <<  "ClapTrap " << this->name << " has no attack damage left" << std::endl;
        return ;
    }
    if (this->hitPoints > 0 && this->energyPoints != 0)
    {
        this->energyPoints--;
        std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
    }
    else if (this->hitPoints == 0)
        std::cout << "ClapTrap " << this->name << " can't attack. It has no health left" << std::endl;
    else if (this->energyPoints == 0)
        std::cout << "ClapTrap " << this->name << " can't attack. It has no energy left" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hitPoints > 0 && this->hitPoints >= amount)
        this->hitPoints -= amount;
    else if (this->hitPoints > 0 && this->hitPoints < amount)
        this->hitPoints = 0;
    else
    {
        std::cout << "ClapTrap " << this->name << " is dead" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->name << " received an attack and lose " << amount << " hit points" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->hitPoints != 0 && this->energyPoints != 0)
    {
        this->hitPoints += amount;
        this->energyPoints--;
        std::cout << "ClapTrap " << this->name << " has been repaired, having " << amount << " hit points" << std::endl;
    }
    else if (energyPoints == 0)
    {
        std::cout << "ClapTrap " << this->name << " has no energy left" << std::endl;
    }
    else if (hitPoints == 0)
    {
        std::cout << "ClapTrap " << this->name << " can't be repaired" << std::endl;
    }
}