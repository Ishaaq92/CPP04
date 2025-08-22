
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(std::string type) : type(type)
{
	std::cout << "WrongAnimal was constructed" << std::endl;
}

WrongAnimal::WrongAnimal(void)
{
	std::cout << "WrongAnimal was constructed" << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal was destructed" << std::endl;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "Wrong Animal Noise" << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return (this->type);
}

