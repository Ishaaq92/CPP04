#pragma once

#include <iostream>

class WrongAnimal
{
	private:

	protected:
		std::string type;

	public:
		WrongAnimal(std::string type);
		WrongAnimal(void);
		~WrongAnimal(void);
		void	makeSound(void) const;
		std::string		getType(void) const;
};
