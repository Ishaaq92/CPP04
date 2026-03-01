/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 15:33:08 by ishaaq            #+#    #+#             */
/*   Updated: 2026/03/01 10:50:00 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
	// std::cout << "Ice is Constructed" << std::endl;
}

Ice::~Ice(void) 
{
	// std::cout << "Ice is Destructed" << std::endl;
}

Ice::Ice(const Ice &i)
{
	*this = i;
}

Ice	&Ice::operator=(const Ice &rhs)
{
	if (this == &rhs)
		return (*this);
	return (*this);
}

AMateria	*Ice::clone(void) const
{
	Ice		*tmp = new Ice();
	return (tmp);
}

void		Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
