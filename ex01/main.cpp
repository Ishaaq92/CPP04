#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	Animal	*animals[100];

	for (int i=0;i<100;i++)
	{
		if (i < 50)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	std::cout << "100 Animals consisting of 50 Dogs followed by 50 Cats." << std::endl;

	for (int i=0;i<100;i++)
		delete animals[i];
	return (0);
}
