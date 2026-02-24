#include "Cat.hpp"
#include <iostream>

Cat::Cat()
{
    type = "Cat";
    brain = new Brain();
    std::cout << "Cat Constructor called\n";
}

Cat::Cat(const Cat& orig)
{
    type = orig.type;
    brain = new Brain(*orig.brain);
    std::cout << "Cat COPY Constructor called\n";
}

Cat& Cat::operator=(const Cat& orig)
{
    if (&orig != this)
    {
        type = orig.type;
        brain = new Brain(*orig.brain);
    }
    return *this;
}

Cat::~Cat()
{
    delete brain;
    std::cout << "Cat Deconstructor called\n";
}

void Cat::makeSound() const
{

    std::cout << "*meow meow*\n";
}

std::string Cat::getIdea(std::size_t index)
{
	return brain->getIdea(index);
}

void Cat::setIdea(std::size_t index, std::string idea)
{
	brain->setIdea(index, idea);
}