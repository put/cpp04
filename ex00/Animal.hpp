#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <string>

class Animal
{
    protected:
    std::string type;
    public:
    Animal();
    Animal(const Animal& orig);
    Animal& operator=(const Animal& orig);
    ~Animal();
    virtual void makeSound() const;
    const std::string& getType() const;
};
#endif