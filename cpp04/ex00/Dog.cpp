#include "Dog.hpp"

Dog::Dog() : Animal()
{
    std::cout << "Dog default constructor called" << std::endl;
    this->type = "Dog";
}

Dog::Dog(const Dog& dog) : Animal(dog)
{
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

Dog& Dog::operator = (const Dog& dog)
{
    std::cout << "Dog assignation operator called" << std::endl;
    this->type = dog.type;
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Woof" << std::endl;
}