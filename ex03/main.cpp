#include <iostream>
#include "Ice.hpp"
#include "Cure.hpp"

int		main(void)
{
	Ice		i = Ice();
	Cure	c = Cure();

	std::cout << i.getType() << std::endl;
	std::cout << c.getType() << std::endl;

}
