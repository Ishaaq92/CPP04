/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 10:26:20 by isahmed           #+#    #+#             */
/*   Updated: 2026/03/01 10:50:32 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
	// std::cout << "Cure is Constructed" << std::endl;
}

Cure::~Cure(void) 
{
	// std::cout << "Cure is Destructed" << std::endl;
}

Cure::Cure(const Cure &c)
{
	this->type = c.getType();
	// std::cout << "Cure is Constructed" << std::endl;
}

Cure	&Cure::operator=(const Cure &rhs)
{
	if (this == &rhs)
		return (*this);
	return (*this);
}

AMateria	*Cure::clone(void) const
{
	Cure	*tmp = new Cure();
	return (tmp);
}

void		Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *"<< std::endl;
}
