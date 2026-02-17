#include <iostream>
#include "Animal.hpp"

Animal::Animal()
{
    type = "An Animal";
    std::cout << "Animal Constructor called" << std::endl;
}

Animal::Animal(const Animal& orig)
{
    type = orig.type;
    std::cout << "Animal COPY Constructor called" << std::endl;
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
    std::cout << "Animal Deconstructor called" << std::endl;
}

void Animal::makeSound() const
{
    std::cout << "*generic animal noises*" << std::endl;
}

const std::string& Animal::getType() const
{
    return type;
}