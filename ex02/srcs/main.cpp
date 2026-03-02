/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 12:16:36 by ishaaq            #+#    #+#             */
/*   Updated: 2026/03/02 15:09:27 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main(void)
{
    std::cout << "--- Test Case 1: Abstract Class Check ---" << std::endl;

    // AAnimal test; // <-- UNCOMMENTING THIS SHOULD CAUSE A COMPILER ERROR!
    std::cout << "AAnimal cannot be instantiated directly. (Try uncommenting 'AAnimal test;' to verify it won't compile)." << std::endl;
    
    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();

    std::cout << "\nSounds via AAnimal pointers:" << std::endl;
    j->makeSound();
    i->makeSound();

    delete j;
    delete i;

    std::cout << "--- Test Case 2: Array of AAnimals (Memory Leaks) ---" << std::endl;

    const int numAnimals = 4; 
    AAnimal* animals[numAnimals];

    std::cout << "-> Constructing animals array:" << std::endl;
    for (int k = 0; k < numAnimals; k++) {
        if (k < numAnimals / 2)
            animals[k] = new Dog();
        else
            animals[k] = new Cat();
    }

    std::cout << "\n-> Destructing animals array:" << std::endl;
    for (int k = 0; k < numAnimals; k++) {
        delete animals[k];
    }

    std::cout << "--- Test Case 3: Deep Copy Confirmation ---" << std::endl;

    Dog basicDog;
    {
        Dog tmpDog = basicDog; // Copy constructor
    } // tmpDog gets destroyed here. 
    std::cout << "-> If we reach here, the Dog copy constructor is deep!" << std::endl;

    Cat cat1;
    Cat cat2;
    cat2 = cat1; // Assignment operator
    std::cout << "-> If we reach here without a crash at exit, the Cat assignment is deep!" << std::endl;

    return (0);
}
