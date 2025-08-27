#include <iostream>
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

/*
int		main(void)
{
	Character	alice("Alice");
	Character	bob("Bob");
	MaterialSource	

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
*/
int main()
{
	IMateriaSource* src = new MateriaSource();

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	// std::cout << tmp->getType() << std::endl;
	tmp = src->createMateria("cure");
	// std::cout << tmp->getType() << std::endl;
	me->equip(tmp);

	ICharacter* bob = new Character("bob");


	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;

	return 0;
}



