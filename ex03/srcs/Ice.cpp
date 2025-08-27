/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaaq <ishaaq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 15:33:08 by ishaaq            #+#    #+#             */
/*   Updated: 2025/08/27 15:35:22 by ishaaq           ###   ########.fr       */
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

AMateria	*Ice::clone(void) const
{
	Ice		*tmp = new Ice();
	return (tmp);
}

void		Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
