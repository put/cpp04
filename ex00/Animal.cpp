#include <iostream>
#include "Animal.hpp"

Animal::Animal()
{
    type = "An Animal";
}

Animal::Animal(const Animal& orig)
{
    type = orig.type;
}

Animal& Animal::operator=(const Animal& orig)
{
    if (&orig != this)
    {
        type = orig.type;
    }
    return *this;
}

Animal::~Animal() = default;

void Animal::makeSound() const
{
    std::cout << "*generic animal noises*" << std::endl;
}

const std::string& Animal::getType() const
{
    return type;
}