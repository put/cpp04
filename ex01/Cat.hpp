#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    public:
    Cat();
    Cat(const Cat& orig);
    Cat& operator=(const Cat& orig);
    ~Cat();
    void makeSound() const override;
	// the following two functions are added to prove deep-copies
	// this is only added to cats as that should be sufficient proof
	// because the copying happens inside Brain, which is used by both Cat and Dog
	void addIdea(std::string idea, int index);
	std::string getIdea(int index);
    private:
    Brain* brain;
};
#endif