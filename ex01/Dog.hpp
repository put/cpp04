#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
    public:
    Dog();
    Dog(const Dog& orig);
    Dog& operator=(const Dog& orig);
    ~Dog();
    void makeSound() const override;
    Brain* brain;
};
#endif