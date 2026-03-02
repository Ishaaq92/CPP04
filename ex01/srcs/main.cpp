/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 12:16:36 by ishaaq            #+#    #+#             */
/*   Updated: 2026/03/02 15:03:57 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int	main(void)
{
    std::cout << "--- Test Case 1: Array of Animals (Memory Leak Check) ---" << std::endl;
    
    const int numAnimals = 6; 
    Animal* animals[numAnimals];

    std::cout << "-> Constructing animals array (Half Dogs, Half Cats):" << std::endl;
    for (int i = 0; i < numAnimals; i++)
    {
        if (i < numAnimals / 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    std::cout << "\n-> Destructing animals array (Testing virtual destructors):" << std::endl;
    for (int i = 0; i < numAnimals; i++)
    {
        delete animals[i];
    }

    std::cout << "--- Test Case 2: Deep Copy (Copy Constructor) ---" << std::endl;
    
    std::cout << "-> Creating Original Dog:" << std::endl;
    Dog* originalDog = new Dog();
    
    std::cout << "\n-> Creating Copied Dog:" << std::endl;
    Dog* copiedDog = new Dog(*originalDog);
    
    std::cout << "\n-> Deleting Original Dog (Its Brain gets destroyed):" << std::endl;
    delete originalDog; 
    
    std::cout << "\n-> Deleting Copied Dog (If shallow copy = Segfault, if deep copy = Success):" << std::endl;
    delete copiedDog; 

    std::cout << "--- Test Case 3: Deep Copy (Assignment Operator) ---" << std::endl;

    std::cout << "-> Creating Cat 1 and Cat 2:" << std::endl;
    Cat cat1;
    Cat cat2;
    
    std::cout << "\n-> Assigning Cat 1 to Cat 2:" << std::endl;
    cat2 = cat1;
    
    std::cout << "\n-> End of program. Scoped destruction will happen now (No double-free = Success):" << std::endl;

    return (0);

}
