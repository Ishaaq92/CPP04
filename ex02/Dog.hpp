#pragma once
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain	*brain;

	protected:

	public:
		Dog(void);
		~Dog(void);
		void	makeSound(void) const;
};
