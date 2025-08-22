#pragma once
#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	private:

	protected:

	public:
		WrongCat(void);
		~WrongCat(void);
		void	makeSound(void) const;
};
