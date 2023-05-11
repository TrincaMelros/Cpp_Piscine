#ifndef FIXED_H
#define FIXED_H

#include <string>
#include <iostream>

class   Fixed{
    private:
        int                 _nValue;
        const static int    _fracBits = 8;
    public:
        Fixed();
        Fixed(const Fixed& f);
        Fixed& operator=(const Fixed& f);
        ~Fixed();

        int     getRawBits(void) const;
        void    setRawBits(int const raw);
};

#endif