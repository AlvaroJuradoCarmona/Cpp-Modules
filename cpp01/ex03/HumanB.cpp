#include "HumanB.hpp"

HumanB::HumanB() {}
HumanB::~HumanB() {}

HumanB::HumanB(std::string name) : name(name) {}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}

void HumanB::attack()
{
    if (!this->weapon)
        std::cout << this->name << " dont have a weapon" << std::endl;
    else
        std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}