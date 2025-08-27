
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(std::string type) : type(type)
{
	std::cout << "WrongAnimal is constructed" << std::endl;
}

WrongAnimal::WrongAnimal(void)
{
	std::cout << "WrongAnimal is constructed" << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal is destructed" << std::endl;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal makes noise" << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return (this->type);
}

