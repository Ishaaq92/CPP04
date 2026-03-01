/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 10:25:19 by isahmed           #+#    #+#             */
/*   Updated: 2026/03/01 10:25:59 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		Cure(const Cure &c);
		Cure	&operator=(const Cure &rhs);
		AMateria	*clone(void) const;
		void		use(ICharacter& target);
};

