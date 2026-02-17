#include "Dog.hpp"
#include <iostream>

Dog::Dog()
{
    type = "Dog";
    std::cout << "Dog Constructor called" << std::endl;
}

Dog::Dog(const Dog& orig)
{
    type = orig.type;
    std::cout << "Dog COPY Constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& orig)
{
    if (&orig != this)
    {
        type = orig.type;
    }
    return *this;
}

Dog::~Dog()
{
    std::cout << "Dog Deconstructor called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "*woof woof*" << std::endl;
}