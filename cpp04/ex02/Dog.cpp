#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog default constructor called" << std::endl;
    this->type = "Dog";
    this->brain = new Brain();
}

Dog::Dog(const Dog& dog)
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = dog;
}

Dog::~Dog()
{
    delete this->brain;
    std::cout << "Dog destructor called" << std::endl;
}

Dog& Dog::operator = (const Dog& dog)
{
    std::cout << "Dog assignation operator called" << std::endl;
    this->type = dog.type;
        this->brain = new Brain(*(dog.brain));
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Woof" << std::endl;
}

Brain* Dog::getBrain() const
{
    return this->brain;
}