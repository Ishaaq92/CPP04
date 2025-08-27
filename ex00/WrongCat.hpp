#pragma once

# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	private:

	protected:

	public:
		WrongCat		&operator=(const WrongCat &rhs);
		WrongCat(void);
		~WrongCat(void);
		void	makeSound(void) const;
};

