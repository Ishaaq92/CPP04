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
	for (int i=0;i<4;i++)
	 	if (this->inventory_[i])
			delete (this->inventory_[i]);
	// std::cout << "MateriaSource was destructed" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &ms)
{
	for (int i=0;i<4;i++)
		this->inventory_[i] = NULL;
	*this = ms;
	// std::cout << "MateriaSource was constructed" << std::endl;
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &rhs)
{
	if (this == &rhs)
		return (*this);

	for (int i=0;i<4;i++)
	 	if (this->inventory_[i])
			delete this->inventory_[i];

	for (int i=0;i<4;i++)
	{
	 	if (rhs.inventory_[i])
			this->inventory_[i] = rhs.inventory_[i]->clone();
		else
			this->inventory_[i] = NULL;
	}
	return (*this);
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
	if (i == 4 && m)
		delete m;
	else if (i == 4 && !m)
		return ;
	this->inventory_[i] = m;
}

