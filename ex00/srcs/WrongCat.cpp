
#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	this->type = "Cat";
	std::cout << "WrongCat has been Constructed" << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat has been Destructed" << std::endl;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "WrongCat meows" << std::endl;
}

WrongCat		&WrongCat::operator=(const WrongCat &rhs)
{
	this->type = rhs.type;
	return (*this);
}

