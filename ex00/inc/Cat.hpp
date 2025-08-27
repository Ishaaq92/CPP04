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
		void	makeSound(void) const;
		Cat	&operator=(const Cat &rhs);
};
