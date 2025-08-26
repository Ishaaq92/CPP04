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

	alice.unequip(0);

	alice.use(0, bob);
	alice.use(1, bob);

	std::cout << i.getType() << std::endl;
	std::cout << c.getType() << std::endl;
//	std::cout << alice.getName() << std::endl;
//	std::cout << bob.getName() << std::endl;
}

