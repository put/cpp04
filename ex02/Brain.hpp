#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <string>

class Brain
{
    public:
    Brain();
    Brain(const Brain& orig);
    Brain& operator=(const Brain& orig);
    ~Brain();
    std::string ideas[100];
};

#endif