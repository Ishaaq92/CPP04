/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 12:16:36 by ishaaq            #+#    #+#             */
/*   Updated: 2026/03/01 10:03:29 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int	main(void)
{
	// AAnimal test;

	const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();

    j->makeSound(); // Will output the dog sound
    i->makeSound(); // Will output the cat sound

    delete j;
    delete i;

	return (0);
}
