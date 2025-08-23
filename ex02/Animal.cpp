
#include "Animal.hpp"

Animal::Animal(std::string type) : type(type)
{
	std::cout << "Animal is Constructed" << std::endl;
}

Animal::Animal(void)
{
	std::cout << "Animal is Constructed" << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "Animal is Destructed" << std::endl;
}

std::string	Animal::getType(void) const
{
	return (this->type);
}

