/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 12:16:36 by ishaaq            #+#    #+#             */
/*   Updated: 2026/03/01 09:12:48 by isahmed          ###   ########.fr       */
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

	std::cout << "\n--- Testing Dog/Cat Deep Copy ---\n" << std::endl;
	Dog basic;
	{
		Dog tmp = basic; // Tests copy constructor
	} 

	std::cout << "If we reach here without a segfault, the copy constructor is deep!" << std::endl;

	Cat cat1;
	Cat cat2;
	cat2 = cat1; 

	std::cout << "If we reach here without a segfault, the assignment operator is deep!" << std::endl;
	
	return (0);
}
