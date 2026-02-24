#include "Cat.hpp"
#include <iostream>

Cat::Cat()
{
    type = "Cat";
    std::cout << "Cat Constructor called\n";
}

Cat::Cat(const Cat& orig)
{
    type = orig.type;
    std::cout << "Cat COPY Constructor called\n";
}

Cat& Cat::operator=(const Cat& orig)
{
    if (&orig != this)
    {
        type = orig.type;
    }
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat Deconstructor called\n";
}

void Cat::makeSound() const
{
    std::cout << "*meow meow*\n";
}