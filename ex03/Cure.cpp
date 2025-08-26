
#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
	std::cout << "Cure is Constructed" << std::endl;
}

Cure::~Cure(void) 
{
	std::cout << "Cure is Destructed" << std::endl;
}

AMateria	*Cure::clone(void) const
{
	Cure	*tmp = new Cure();
	return (tmp);
}

void		Cure::use(ICharacter& target)
{
	std::cout << "Cure: * heals " << target.getName() << "’s wounds *"<< std::endl;
}

