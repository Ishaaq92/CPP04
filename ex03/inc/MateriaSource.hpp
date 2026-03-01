/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 10:42:20 by isahmed           #+#    #+#             */
/*   Updated: 2026/03/01 10:46:45 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		MateriaSource(const MateriaSource &ms);
		MateriaSource	&operator=(const MateriaSource &rhs);

		void				learnMateria(AMateria *m);
		AMateria			*createMateria(std::string const &type);
};
