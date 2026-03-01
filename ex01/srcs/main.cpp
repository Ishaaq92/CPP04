/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaaq <ishaaq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 12:16:36 by ishaaq            #+#    #+#             */
/*   Updated: 2026/02/22 13:10:57 by ishaaq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int	main(void)
{
	const int	max = 8;

	Animal	*animals[max];

	std::cout << "\n" << max <<" Animals consisting of " << max /2 << " Dogs followed by 50 Cats.\n" << std::endl;
	for (int i=0;i<max;i++)
	{
		if (i < (max/2))
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	for (int i=0;i<max;i++)
		delete animals[i];

	std::cout << "\n" << "Deep copy vs shallow copy" << std::endl;

	Brain *brain1 = new Brain();
	brain1->getBrain().setIdea("I'm Brain 1", 0);

	Brain *brain2 = new Brain();
	brain2->getBrain().setIdea("I'm Brain 2", 0);

	brain1 = brain2;
	if (brain1 == brain2)
		std::cout << "Shallow"<< std::endl;
	else 
		std::cout << "deep"<< std::endl;
	// brain1->printIdeas();
	
	return (0);
}
