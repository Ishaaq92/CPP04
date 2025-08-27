#pragma once
#include "Animal.hpp"
#include <iostream>
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain	*brain;

	protected:

	public:
		Cat(void);
		~Cat(void);
		void	makeSound(void) const;
};
