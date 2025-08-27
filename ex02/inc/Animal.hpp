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
		virtual ~Animal(void);
		virtual void	makeSound(void) const = 0;
		std::string		getType(void) const;
};
