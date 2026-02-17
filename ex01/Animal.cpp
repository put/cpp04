#include <iostream>
#include "Animal.hpp"

AAnimal::AAnimal()
{
    type = "An Animal";
    std::cout << "Animal Constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal& orig)
{
    type = orig.type;
    std::cout << "Animal COPY Constructor called" << std::endl;
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
    std::cout << "Animal Deconstructor called" << std::endl;
}

void AAnimal::makeSound() const
{
    std::cout << "*generic animal noises*" << std::endl;
}

const std::string& AAnimal::getType() const
{
    return type;
}