#include "Fixed.hpp"

Fixed::Fixed()
{
    _nValue = 0;
    std::cout << "Default Constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& f) : _nValue(f._nValue)
{
    std::cout << "Copy Constructor called" << std::endl;
    this->_nValue = f.getRawBits();
}

Fixed&  Fixed::operator=(const Fixed& f)
{
    std::cout << "Copy assignment operator called" << std::endl;
    (this->_nValue) = f.getRawBits();
    return (*this);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return(_nValue);
}

void    Fixed::setRawBits(int const raw)
{
    _nValue = raw;
}