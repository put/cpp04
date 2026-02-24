#include <iostream>
#include "Animal.hpp"

AAnimal::AAnimal()
{
    type = "An Animal";
    std::cout << "Animal Constructor called\n";
}

AAnimal::AAnimal(const AAnimal& orig)
{
    type = orig.type;
    std::cout << "Animal COPY Constructor called\n";
}

AAnimal& AAnimal::operator=(const AAnimal& orig)
{
    if (&orig != this)
    {
        type = orig.type;
    }
    return *this;
}

AAnimal::~AAnimal()
{
    std::cout << "Animal Deconstructor called\n";
}

void AAnimal::makeSound() const
{
    std::cout << "*generic animal noises*\n";
}

const std::string& AAnimal::getType() const
{
    return type;
}