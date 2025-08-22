
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(std::string type) : type(type)
{
}

WrongAnimal::WrongAnimal(void)
{
}

WrongAnimal::~WrongAnimal(void)
{
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "Wrong Animal Noise" << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return (this->type);
}
