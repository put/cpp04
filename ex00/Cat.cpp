#include "Cat.hpp"
#include <iostream>

Cat::Cat()
{
    type = "Cat";
}

Cat::Cat(const Cat& orig)
{
    type = orig.type;
}

Cat& Cat::operator=(const Cat& orig)
{
    if (&orig != this)
    {
        type = orig.type;
    }
    return *this;
}

Cat::~Cat() = default;

void Cat::makeSound() const
{
    std::cout << "*meow meow*" << std::endl;
}