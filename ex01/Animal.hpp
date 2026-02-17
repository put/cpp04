#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <string>

class AAnimal
{
    protected:
    std::string type;
    public:
    AAnimal();
    AAnimal(const AAnimal& orig);
    AAnimal& operator=(const AAnimal& orig);
    virtual ~AAnimal();
    virtual void makeSound() const;
    const std::string& getType() const;
};
#endif