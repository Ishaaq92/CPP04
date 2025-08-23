
#include "Cure.hpp"

Cure::Cure(std::string type) : AMateria(type)
{
	std::cout << "Cure is Constructed" << std::endl;
}

Cure::~Cure(std::string type) 
{
	std::cout << "Cure is Destructed" << std::endl;
}

AMateria	*Cure::clone(void) const
{
	Cure	*tmp = new Cure("cure")
	return (tmp);
}

void		Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target->getName() << "’s wounds *"<< std::endl;
}

