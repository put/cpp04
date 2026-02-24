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
    // for the purposes of proving cat copies are deep copies, we add an idea and print it out
    // as part of the cat's sound, so that if a cat is copied and then the original is deleted
    // we should still be able to print the first idea of the copied cat if it was a deep copy
    // won't do this for dog, we just use cat as example, these modules allow freedom so here's
    // me making use of that lol
    this->brain->ideas[0] = "go for a walk";
    std::cout << "*my idea: " << this->brain->ideas[0] << "*\n";
}