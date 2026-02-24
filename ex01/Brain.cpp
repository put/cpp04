#include "Brain.hpp"
#include <iostream>

Brain::Brain()
{
    std::cout << "Brain ctor called\n";
}

Brain::Brain(const Brain& orig)
{
    for (int i = 0; i < 100; i++)
        ideas[i] = orig.ideas[i];
    std::cout << "Brain COPY ctor called\n";
}

Brain::~Brain()
{
    std::cout << "Brain deconstructor called\n";
}

Brain& Brain::operator=(const Brain& orig)
{
    if (&orig != this)
    {
        for (int i = 0; i < 100; i++)
            ideas[i] = orig.ideas[i];
    }
    std::cout << "Brain assign operator called\n";
    return *this;
}