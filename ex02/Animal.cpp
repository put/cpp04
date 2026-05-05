#include <iostream>
#include "Animal.hpp"

Animal::Animal()
{
    type = "An Animal";
    std::cout << "Animal Constructor called\n";
}

Animal::Animal(const Animal& orig)
{
    type = orig.type;
    std::cout << "Animal COPY Constructor called\n";
}

Animal& Animal::operator=(const Animal& orig)
{
    if (&orig != this)
    {
        type = orig.type;
    }
    return *this;
}

Animal::~Animal()
{
    std::cout << "Animal Deconstructor called\n";
}

const std::string& Animal::getType() const
{
    return type;
}