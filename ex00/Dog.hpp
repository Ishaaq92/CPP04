#pragma once
#include <iostream>
#include "Animal.hpp"

class Dog : public Animal
{
	private:

	protected:

	public:
		Dog(void);
		~Dog(void);
		void	makeSound(void) const;
		Dog		&operator=(const Dog &rhs);
};
