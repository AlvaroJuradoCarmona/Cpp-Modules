#include"Ice.hpp"

Ice::Ice() : AMateria("ice"){}

Ice::Ice(const Ice &ice) : AMateria(ice)
{
    *this = ice; 
}

Ice::~Ice(){}

Ice& Ice::operator=(const Ice & ice)
{
    this->type = ice.type;
    return *this;
}

AMateria* Ice::clone() const
{
    return new Ice();
}


void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}