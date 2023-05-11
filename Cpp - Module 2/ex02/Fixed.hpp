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
  
        bool operator>(const Fixed& f);
        bool operator<(const Fixed& f);
        bool operator>=(const Fixed& f);
        bool operator<=(const Fixed& f);
        bool operator==(const Fixed& f);
        bool operator!=(const Fixed& f);

        Fixed operator+(const Fixed& f);
        Fixed operator-(const Fixed& f);
        Fixed operator*(const Fixed& f);
        Fixed operator/(const Fixed& f);

        Fixed operator++(void);
        Fixed operator--(void);
        Fixed operator++(int);
        Fixed operator--(int);

        static Fixed min(Fixed& a, Fixed& b);
        static Fixed min(const Fixed& a, const Fixed& b);
        static Fixed max(Fixed& a, Fixed& b);
        static Fixed max(const Fixed& a, const Fixed& b);
        

        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        float   toFloat(void) const;
        int     toInt(void) const;
};

std::ostream & operator<<(std::ostream &f, Fixed const &p);

#endif
