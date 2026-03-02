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
    std::cout << "--- Test Case 1: Subject Mandatory Main ---" << std::endl;

    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter* me = new Character("me");
    AMateria* tmp;
    
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);

    ICharacter* bob = new Character("bob");

    me->use(0, *bob);
    me->use(1, *bob);

    std::cout << "--- Test Case 2: Deep Copy of Character ---" << std::endl;

    Character* original = new Character("Original");
    tmp = src->createMateria("ice");
    original->equip(tmp);
    
    Character* copy = new Character(*original); // Deep copy construction
    
    std::cout << "Copy uses slot 0 (Should be Ice):" << std::endl;
    copy->use(0, *bob); 

    std::cout << "\n-> Modifying original (adding Cure to slot 1)..." << std::endl;
    tmp = src->createMateria("cure");
    original->equip(tmp);
    
    std::cout << "Original uses slot 1 (Cure):" << std::endl;
    original->use(1, *bob);
    
    std::cout << "Copy uses slot 1 (Should be empty and do nothing):" << std::endl;
    copy->use(1, *bob); 

    delete original;
    delete copy;

    std::cout << "--- Test Case 3: Inventory Limits and Unequip Memory ---" << std::endl;

    ICharacter* cloud = new Character("Cloud");
    AMateria* m1 = src->createMateria("ice");
    AMateria* m2 = src->createMateria("cure");
    AMateria* m3 = src->createMateria("ice");
    AMateria* m4 = src->createMateria("cure");
    AMateria* m5 = src->createMateria("ice"); // 5th item

    cloud->equip(m1);
    cloud->equip(m2);
    cloud->equip(m3);
    cloud->equip(m4);
    
    std::cout << "-> Equipping 5th item (Inventory full, should do nothing):" << std::endl;
    cloud->equip(m5); 
    delete m5; // Since it couldn't be equipped, we must delete it manually to avoid a leak.

    std::cout << "\n-> Unequipping slot 1 (Cure)..." << std::endl;
    cloud->unequip(1);
    
    std::cout << "-> Using slot 1 (Should do nothing):" << std::endl;
    cloud->use(1, *bob);
    
    // Unequipping does NOT delete the Materia according to the subject, 
    // so we must delete it manually so it doesn't leak!
    delete m2; 

    std::cout << "\n--- Cleaning up ---" << std::endl;
    delete cloud;
    delete bob;
    delete me;
    delete src;

    return 0;}
