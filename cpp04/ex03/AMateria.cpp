
#include"AMateria.hpp"

AMateria::AMateria()
{
    this->type = "default"; 
}

AMateria::AMateria(std::string const & type)
{
    this->type = type;
}

AMateria::AMateria(const AMateria & aMateria)
{
    *this = aMateria; 
}

AMateria::~AMateria(){}

AMateria& AMateria::operator=(const AMateria & aMateria)
{
    this->type = aMateria.type;
    return *this;
}

std::string const & AMateria::getType() const
{
    return this->type;
}

void AMateria::use(ICharacter& target)
{
    std::cout << "It was used the AMateria type " << type << " against " << target.getName() << std::endl;
}