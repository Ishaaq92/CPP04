
#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	this->type = "Cat";
	std::cout << "Cat has been Constructed" << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << "Cat has been Destructed" << std::endl;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Cat meows" << std::endl;
}
