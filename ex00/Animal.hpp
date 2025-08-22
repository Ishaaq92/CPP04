#pragma once

#include <iostream>

class Animal
{
	private:

	protected:
		std::string type;

	public:
		Animal(std::string type);
		Animal(void);
		~Animal(void);
		virtual void	makeSound(void) const;
		std::string		getType(void) const;
};
