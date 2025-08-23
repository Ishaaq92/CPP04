#pragma once

#include <iostream>
#include "AMateria.hpp" 

class Ice: public AMateria
{
	private:

	protected:

	public:
		Ice(void);
		~Ice(void);
		AMateria	*clone(void) const;
		void		use(ICharacter& target);
};
