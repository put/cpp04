#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

int main()
{
    const Animal* d = new Dog();
    const Animal* c = new Cat();
    delete d;//should not create a leak
    delete c;

    Animal* animals[10];
    for (int i = 0; i < 5; i++)
        animals[i] = new Dog();
    for (int i = 5; i < 10; i++)
        animals[i] = new Cat();

    // make a new cat
    Cat* base = new Cat();
	//set an idea to later prove we deep copied these
	base->setIdea(0, "taking a walk\n");
    // copy cat
    Cat* second = new Cat(*base);
    // delete original cat
    delete base;
    // print idea in copied cat to prove it was deep copied
	std::cout << second->getIdea(0);
    // get rid of second again
    delete second;

    // the following line will no longer work due to makeSound being pure virtual:
    // Animal can not be instantiated anymore
    //Animal an;
    for (int i = 0; i < 10; i++)
        delete animals[i];
    return 0;
}