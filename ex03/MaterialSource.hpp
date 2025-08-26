#include <iostream>

void	learnMateria(AMateria *m)
{
	AMateria	*inventory[4];

	for (int i=0;i < 4;i++)
		inventory[i] = NULL;
}

class MateriaSource : public IMaterialSource
{
	private:

	protected:

	public:
		MateriaSource(void);
		~MateriaSource(void);
		void	learnMateria(AMateria *m);
}
