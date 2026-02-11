#include "Dog.hpp"
#include <iostream>

Dog::Dog()
{
    type = "Dog";
}

Dog::Dog(const Dog& orig)
{
    type = orig.type;
}

Dog& Dog::operator=(const Dog& orig)
{
    if (&orig != this)
    {
        type = orig.type;
    }
    return *this;
}

Dog::~Dog() = default;

void Dog::makeSound() const
{
    std::cout << "*woof woof*" << std::endl;
}