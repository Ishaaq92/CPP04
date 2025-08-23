
#include "Cat.hpp"

Cat::Cat(void)
{
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << "Cat has been Constructed" << std::endl;
}

Cat::~Cat(void)
{
	delete this->brain;
	std::cout << "Cat has been Destructed" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "Cat meows" << std::endl;
}

