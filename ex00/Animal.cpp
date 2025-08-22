
#include "Animal.hpp"

Animal::Animal(std::string type) : type(type)
{
}

Animal::Animal(void)
{
}

Animal::~Animal(void)
{
}

void	Animal::makeSound(void) const
{
}

std::string	Animal::getType(void) const
{
	return (this->type);
}
