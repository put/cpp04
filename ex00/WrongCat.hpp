#ifndef WrongCat_HPP
#define WrongCat_HPP
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
    WrongCat();
    WrongCat(const WrongCat& orig);
    WrongCat& operator=(const WrongCat& orig);
    ~WrongCat();
    void makeSound() const override;
};
#endif