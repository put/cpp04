#include <iostream>
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    type = "An WrongAnimal";
    std::cout << "WrongAnimal Constructor called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& orig)
{
    type = orig.type;
    std::cout << "WrongAnimal COPY Constructor called\n";
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& orig)
{
    if (&orig != this)
    {
        type = orig.type;
    }
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Deconstructor called\n";
}

void WrongAnimal::makeSound() const
{
    std::cout << "*generic WrongAnimal noises*\n";
}

const std::string& WrongAnimal::getType() const
{
    return type;
}