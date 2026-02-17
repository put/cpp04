#include "Dog.hpp"
#include <iostream>

Dog::Dog()
{
    type = "Dog";
    brain = new Brain();
    std::cout << "Dog Constructor called" << std::endl;
}

Dog::Dog(const Dog& orig)
{
    type = orig.type;
    brain = new Brain(*orig.brain);
    std::cout << "Dog COPY Constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& orig)
{
    if (&orig != this)
    {
        type = orig.type;
        brain = new Brain(*orig.brain);
    }
    return *this;
}

Dog::~Dog()
{
    delete brain;
    std::cout << "Dog Deconstructor called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "*woof woof*" << std::endl;
}