#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : type(type)
{
	std::cout << "AMateria is constructed" << std::endl;
}
AMateria::~AMateria(void)
{
	std::cout << "AMateria is constructed" << std::endl;
}

std::string	const &AMateria::getType(void) const
{
	return (this->type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << this->getType() << ": " << "* shoots an ice bolt at " <<  target.getName() << " * " << std::endl;
}

