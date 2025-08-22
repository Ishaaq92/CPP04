
#include "Animal.hpp"

Animal::Animal(std::string type) : type(type)
{
	std::cout << "Animal is constructed" << std::endl;
}

Animal::Animal(void)
{
	std::cout << "Animal is constructed" << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "Animal is destructed" << std::endl;
}

void	Animal::makeSound(void) const
{
	std::cout << "Animal makes noise" << std::endl;
}

std::string	Animal::getType(void) const
{
	return (this->type);
}

