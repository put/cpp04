#include "Cat.hpp"
#include <iostream>

Cat::Cat()
{
    type = "Cat";
    brain = new Brain();
    std::cout << "Cat Constructor called\n";
}

Cat::Cat(const Cat& orig) : Animal(orig)
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

void Cat::addIdea(std::string idea, int index)
{
	brain->addIdea(idea, index);
}

std::string Cat::getIdea(int index) {
	return brain->getIdea(index);
}