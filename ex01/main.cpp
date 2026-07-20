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

	// Create list of 10 animals
	Animal* animals[10];
	// Add 5 dogs to the list
	for (int i = 0; i < 5; i++)
		animals[i] = new Dog();
	// Add 5 cats to the list
	for (int i = 5; i < 10; i++)
		animals[i] = new Cat();

	for (int i = 0; i < 10; i++)
	{
		// Have each animal make a sound to show they are cats and dogs
		animals[i]->makeSound();
		// Then delete the animal as they will no longer be used
		// This should not have leaks
		delete animals[i];
	}

	// make a new cat
	Cat* base = new Cat();
	base->addIdea("BASE CAT'S GENIUS IDEA", 0);
	Cat* second = new Cat(*base);
	// delete original cat
	delete base;
	// print the first idea in the copied cat
	// this should print out the idea that we added in the now-deleted base cat
	std::cout << second->getIdea(0) << std::endl;
	// get rid of second again
	delete second;
	return 0;
}