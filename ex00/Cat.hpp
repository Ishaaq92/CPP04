#pragma once
#include "Animal.hpp"
#include <iostream>

class Cat : public Animal
{
	private:

	protected:

	public:
		Cat(void);
		~Cat(void);
		Cat	&operator=(const Cat &rhs);
		void	makeSound(void) const;
};
