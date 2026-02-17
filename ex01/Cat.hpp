#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
    public:
    Cat();
    Cat(const Cat& orig);
    Cat& operator=(const Cat& orig);
    ~Cat();
    void makeSound() const override;
    private:
    Brain* brain;
};
#endif