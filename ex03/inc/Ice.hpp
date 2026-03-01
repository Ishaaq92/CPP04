/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 10:10:58 by isahmed           #+#    #+#             */
/*   Updated: 2026/03/01 10:15:00 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include "AMateria.hpp" 

class Ice: public AMateria
{
	private:

	protected:

	public:
		Ice(void);
		~Ice(void);
		Ice(const Ice &i);
		Ice	&operator=(const Ice &rhs);

		AMateria	*clone(void) const;
		void		use(ICharacter& target);
};
