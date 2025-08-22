
#include "Dog.hpp"

Dog::Dog(void)
{
	this->type = "Dog";
	std::cout << "Dog has been constructed" << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "Dog has been destructed" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "Dog barks" << std::endl;
}
