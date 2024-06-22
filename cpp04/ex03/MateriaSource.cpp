#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for(int i = 0; i < 4; i++)
        this->materias[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &materiaSource)
{
    *this = materiaSource;
    for(int i = 0; i < 4; i++)
    {
        if(this->materias[i])
        { 
            delete this->materias[i];
            this->materias[i]->clone();
        }
    }
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        if (this->materias[i]) 
            delete this->materias[i];
    }
}

MateriaSource	&MateriaSource::operator=(MateriaSource const &other) {
	if (this != &other) {
		for (int i = 0; i < 4; i++) {
			if (materias[i] != NULL)
				delete materias[i];
			materias[i] = other.materias[i]->clone();
		}
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria* m)
{
    int i = -1;
    while( ++i < 4 && this->materias[i]);
    i < 4 ? this->materias[i] = m : NULL;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    int i = -1;
    while( ++i < 4 && this->materias[i])
    {
        if(this->materias[i] && this->materias[i]->getType() == type)
            return this->materias[i]->clone();
    }
    return NULL;
}
