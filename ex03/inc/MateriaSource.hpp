#pragma once

# include <iostream>
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria	*inventory_[4];

	protected:

	public:
		MateriaSource(void);
		~MateriaSource(void);
		void				learnMateria(AMateria *m);
		AMateria			*createMateria(std::string const &type);
};

