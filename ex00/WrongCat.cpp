#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat()
{
    type = "WrongCat";
    std::cout << "WrongCat Constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& orig)
{
    type = orig.type;
    std::cout << "WrongCat COPY Constructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& orig)
{
    if (&orig != this)
    {
        type = orig.type;
    }
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Deconstructor called" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "*mrrooww mrrooww (something is wrong with this cat)*" << std::endl;
}