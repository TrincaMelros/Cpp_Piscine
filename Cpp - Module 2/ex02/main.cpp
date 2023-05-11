#include "Fixed.hpp"

int main()
{
        Fixed a;
        Fixed b(Fixed(5.05f) * Fixed(2));
        Fixed c(20);
        Fixed d(2);
        Fixed e(c / d);

        std::cout << a << std::endl;
        std::cout << ++a << std::endl;
        std::cout << a << std::endl;
        std::cout << a++ << std::endl;
        std::cout << a << std::endl;

        std::cout << b << std::endl;

        std::cout << Fixed::max(a, b) << std::endl;

        if (c >= d)
                std::cout << "Success" << std::endl; 
        else
                std::cout << "no bueno" << std::endl;

        std::cout << e << std::endl;

        return (0);
}