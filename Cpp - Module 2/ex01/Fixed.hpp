#ifndef FIXED_H
#define FIXED_H

#include <string>
#include <iostream>
#include <cmath>

class   Fixed{
    private:
        int                 _nValue;
        const static int    _fracBits = 8;
    public:
        Fixed();
        Fixed(int   number);
        Fixed(float number);
        Fixed(const Fixed& f);
        Fixed& operator=(const Fixed& f);
        ~Fixed();

        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        float   toFloat(void) const;
        int     toInt(void) const;
};

std::ostream & operator<<(std::ostream &f, Fixed const &p);

#endif
