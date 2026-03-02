/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 11:57:22 by ishaaq            #+#    #+#             */
/*   Updated: 2026/03/02 15:01:38 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout << "--- Test Case 1: Correct Polymorphism ---" << std::endl;
    
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << "\nTypes:" << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;

    std::cout << "\nSounds:" << std::endl;
    i->makeSound(); // Will output the Cat sound
    j->makeSound(); // Will output the Dog sound
    meta->makeSound(); // Will output the Animal sound

    std::cout << "\nDestruction:" << std::endl;
    delete meta;
    delete j;
    delete i;

    std::cout << "--- Test Case 2: Wrong Polymorphism (No Virtual) ---" << std::endl;
    
    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();
    const WrongCat* actualWrongCat = new WrongCat();

    std::cout << "\nType:" << std::endl;
    std::cout << wrongCat->getType() << " " << std::endl;

    std::cout << "\nSounds:" << std::endl;
    wrongCat->makeSound();      // Outputs WrongAnimal sound because makeSound() is NOT virtual
    actualWrongCat->makeSound(); // Outputs WrongCat sound because the pointer is of type WrongCat
    wrongMeta->makeSound();

    std::cout << "\nDestruction:" << std::endl;
    delete wrongMeta;
    delete wrongCat;
    delete actualWrongCat;

    std::cout << "--- Test Case 3: Stack Allocation & Copy ---" << std::endl;

    Dog originalDog;
    Dog copyDog(originalDog); // Calls Copy Constructor
    
    Cat originalCat;
    Cat assignCat;
    assignCat = originalCat;  // Calls Assignment Operator

    std::cout << "\nSounds:" << std::endl;
    copyDog.makeSound();
    assignCat.makeSound();

    std::cout << "\nDestruction (Automatic as they go out of scope):" << std::endl;
    
    return (0);
}
