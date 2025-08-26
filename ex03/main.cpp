#include <iostream>
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int		main(void)
{
	Character	alice("Alice");
	Character	bob("Bob");

	Ice		i = Ice();
	Cure	c = Cure();
	alice.equip(&i);
	alice.equip(&c);

	std::cout << alice.getName() << std::endl;
	std::cout << bob.getName() << std::endl;
}

