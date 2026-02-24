#include "Dog.hpp"
#include <iostream>

Dog::Dog()
{
    type = "Dog";
    std::cout << "Dog Constructor called\n";
}

Dog::Dog(const Dog& orig)
{
    type = orig.type;
    std::cout << "Dog COPY Constructor called\n";
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
    std::cout << "Dog Deconstructor called\n";
}

void Dog::makeSound() const
{
    std::cout << "*woof woof*\n";
}