#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	for (int i=0;i < 4;i++)
		this->inventory_[i] = NULL;
	// std::cout << "MateriaSource was constructed" << std::endl;
}

MateriaSource::~MateriaSource(void)
{
	// std::cout << "MateriaSource was destructed" << std::endl;
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	int	i;

	i = -1;
	while (++i < 4)
		if (this->inventory_[i] && this->inventory_[i]->getType().compare(type) == 0)
			break ;
	if (i == 4)
		return (NULL);
	return (this->inventory_[i]->clone());
}

void	MateriaSource::learnMateria(AMateria *m)
{
	int	i;

	i = -1;
	while (++i < 4)
		if (!this->inventory_[i])
			break;
	if (i == 4)
		return ;
	this->inventory_[i] = m;
}

