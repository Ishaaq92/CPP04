
#include "Ice.hpp"

Ice::Ice(std::string type) : AMateria(type)
{
	std::cout << "Ice is Constructed" << std::endl;
}

Ice::~Ice(std::string type) 
{
	std::cout << "Ice is Destructed" << std::endl;
}

AMateria	*Ice::clone(void) const
{
	Ice		*tmp = new Ice("ice")
	return (tmp);
}

void		Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target->getName() << " *" << std::endl;
}


