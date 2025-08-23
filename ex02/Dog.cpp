
#include "Dog.hpp"

Dog::Dog(void)
{
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "Dog has been constructed" << std::endl;
}

Dog::~Dog(void)
{
	delete this->brain;
	std::cout << "Dog has been destructed" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "Dog barks" << std::endl;
}
