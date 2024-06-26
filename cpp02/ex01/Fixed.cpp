#include "Fixed.hpp"

Fixed::Fixed() : value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& f)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = f;
}

Fixed::Fixed(const int v)
{
    std::cout << "Int constructor called" << std::endl;
    this->value = v << this->rawBits;
}

Fixed::Fixed(const float v)
{
    std::cout << "Float constructor called" << std::endl;
    this->value = roundf(v * (1 << this->rawBits));
}

Fixed& Fixed::operator = (const Fixed& f)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->value = f.value;
    return *this;
}

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->value;
}

void Fixed::setRawBits(int const raw) {
    std::cout << "setRawBits member function called" << std::endl;
    this->value = raw;
}

float Fixed::toFloat() const
{
    return float(this->value) / (1 << rawBits);
}

int Fixed::toInt() const
{
    return this->value >> this->rawBits;
}

std::ostream& operator << (std::ostream &o, const Fixed& f)
{
    return o << f.toFloat();
}