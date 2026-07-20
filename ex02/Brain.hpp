#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <string>

class Brain
{
	private:
	std::string ideas[100];
    public:
    Brain();
    Brain(const Brain& orig);
    Brain& operator=(const Brain& orig);
    ~Brain();
	void addIdea(std::string idea, int index); // added to prove deep-copies
	std::string getIdea(int index); // also added to prove deep-copies
};

#endif