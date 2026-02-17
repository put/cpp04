#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int mainWithWrongAnimalAndCat();

int main()
{
    const AAnimal* meta = new AAnimal();
    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    delete meta;
    meta = j;
    meta->makeSound();
    meta = i;
    meta->makeSound();
    delete j;
    delete i;
    std::cout << "---------------------" << std::endl;
    mainWithWrongAnimalAndCat();
    return 0;
}

int mainWithWrongAnimalAndCat()
{
    const WrongAnimal* meta = new WrongAnimal();
    const AAnimal* j = new Dog();
    const WrongAnimal* i = new WrongCat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the wrongcat sound!
    j->makeSound();
    meta->makeSound();
    delete meta;
    meta = i;
    meta->makeSound();
    delete j;
    delete i;
    return 0;
}