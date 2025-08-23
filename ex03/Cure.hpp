#pragma once

# include "AMateria.hpp"
# include <iostream>

class Cure : public AMateria
{
	private:

	protected:

	public:
		Cure(void);
		~Cure(void);
		AMateria	*clone(void) const;
		void		use(ICharacter& target);
};

