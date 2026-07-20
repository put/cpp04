#ifndef WrongAnimal_HPP
#define WrongAnimal_HPP
#include <string>

class WrongAnimal
{
    protected:
    std::string type;
    public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal& orig);
    WrongAnimal& operator=(const WrongAnimal& orig);
    virtual ~WrongAnimal();
    void makeSound() const;
    const std::string& getType() const;
};
#endif