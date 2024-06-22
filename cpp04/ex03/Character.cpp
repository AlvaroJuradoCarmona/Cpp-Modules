#include "Character.hpp"

Character::Character()
{
    this->name = "default character";
    for(int i = 0; i < 4; i++)
        this->inventory[i] = NULL;
}

Character::Character(std::string const &name)
{
    this->name = name;
    for(int i = 0; i < 4; i++)
        this->inventory[i] = NULL;
}

Character::Character(const Character &character)
{
    this->name = character.name;
    for(int i = 0; i < 4; i++)
    {
        if(this->inventory[i])
        { 
            delete this->inventory[i];
            this->inventory[i]->clone();
        }
    }
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
    {
        if (this->inventory[i]) 
            delete this->inventory[i];
    }
}

Character & Character::operator=(const Character &character)
{
    this->name = character.name;
    for(int i = 0; i < 4; i++)
    {
        if(this->inventory[i])
        { 
            delete this->inventory[i];
            this->inventory[i]->clone();
        }
    }
    return *this;
}

std::string const & Character::getName() const
{
    return this->name;
}

void Character::equip(AMateria* m)
{
    int i = -1;
    while( ++i < 4 && this->inventory[i]);
    i < 4 ? this->inventory[i] = m : NULL;
}

void Character::unequip(int idx)
{
    idx >= 0 && idx < 4 ? this->inventory[idx] = NULL : NULL;
}

void Character::use(int idx, ICharacter& target)
{
    if(idx >= 0 && idx < 4)
        this->inventory[idx]->use(target);
}