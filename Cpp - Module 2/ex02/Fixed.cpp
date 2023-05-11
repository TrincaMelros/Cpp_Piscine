#include "Fixed.hpp"

Fixed::Fixed()
{
    _nValue = 0;
//    std::cout << "Default Constructor called" << std::endl;
}

Fixed::Fixed(int    number)
{
//    std::cout << "Int Constructor called" << std::endl;
    _nValue = number << _fracBits;
}

Fixed::Fixed(float  number)
{
//    std::cout << "Float Constructor called" << std::endl;
    _nValue = roundf(number * (1 << _fracBits));
}

Fixed::Fixed(const Fixed& f) : _nValue(f._nValue)
{
//    std::cout << "Copy Constructor called" << std::endl;
    this->_nValue = f.getRawBits();
}

Fixed&  Fixed::operator=(const Fixed& f)
{
//    std::cout << "Copy assignment operator called" << std::endl;
    (this->_nValue) = f.getRawBits();
    return (*this);
}

Fixed::~Fixed()
{
//    std::cout << "Destructor called" << std::endl;
}

/* __________________ */

bool  Fixed::operator>(const Fixed& f)
{
    return (_nValue > f._nValue);
}

bool  Fixed::operator<(const Fixed& f)
{
    return (_nValue < f._nValue);
}

bool Fixed::operator>=(const Fixed& f)
{
    return (_nValue >= f._nValue);
}

bool Fixed::operator<=(const Fixed& f)
{
    return( _nValue <= f._nValue);
}

bool Fixed::operator==(const Fixed& f)
{
    return (_nValue == f._nValue);
}
bool Fixed::operator!=(const Fixed& f)
{
    return (_nValue != f._nValue);
}

Fixed   Fixed::operator+(const Fixed& f)
{
    return (Fixed(toFloat() + f.toFloat()));
}

Fixed   Fixed::operator-(const Fixed& f)
{
    return (Fixed(toFloat() - f.toFloat()));
}

Fixed   Fixed::operator*(const Fixed& f)
{
    return (Fixed(toFloat() * f.toFloat()));
}

Fixed   Fixed::operator/(const Fixed& f)
{
    return (Fixed(toFloat() / f.toFloat()));
}

Fixed   Fixed::operator++(void)
{
    ++(this->_nValue);
    return (*this);
}

Fixed   Fixed::operator--(void)
{
    --(this->_nValue);
    return(*this);
}

Fixed   Fixed::operator++(int)
{
    Fixed temp(this->toFloat());

    ++(*this);
    return(temp);
}

Fixed   Fixed::operator--(int)
{
    Fixed   temp(this->toFloat());

    --(*this);
    return (temp);
}

Fixed Fixed::min(Fixed& a, Fixed &b)
{
    if (a < b)
        return (a);
    else
        return (b);
}

Fixed Fixed::max(Fixed& a, Fixed &b)
{
    if (a > b)
        return (a);
    else
        return (b);
}

Fixed Fixed::min(const Fixed& a, const Fixed &b)
{
    if (a.getRawBits() < b.getRawBits())
        return (a);
    else
        return (b);
}

Fixed Fixed::max(const Fixed& a, const Fixed &b)
{
    if (a.getRawBits() > b.getRawBits())
        return (a);
    else
        return (b);
}

/* __________________ */

int Fixed::getRawBits(void) const
{
    return(_nValue);
}

void    Fixed::setRawBits(int const raw)
{
    _nValue = raw;
}

float   Fixed::toFloat(void) const
{
    return ((float)_nValue / (1 << _fracBits));
}

int     Fixed::toInt(void) const
{
    return (_nValue >> _fracBits);
}

/* __________________ */

std::ostream & operator<<(std::ostream &f, Fixed const &p)
{
    f << p.toFloat();
    return (f);
}
