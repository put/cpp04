#include "Cat.hpp"
#include <iostream>

Cat::Cat()
{
    type = "Cat";
    std::cout << "Cat Constructor called" << std::endl;
}

Cat::Cat(const Cat& orig)
{
    type = orig.type;
    std::cout << "Cat COPY Constructor called" << std::endl;
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
    std::cout << "Cat Deconstructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "*meow meow*" << std::endl;
}