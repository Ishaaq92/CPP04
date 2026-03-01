/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 15:30:58 by ishaaq            #+#    #+#             */
/*   Updated: 2026/03/01 11:41:04 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria(void)
{
	// std::cout << "AMateria is constructed" << std::endl;
}

AMateria::~AMateria(void)
{
	// std::cout << "AMateria is constructed" << std::endl;
}

AMateria::AMateria(std::string const &type) : type(type)
{
	// std::cout << "AMateria is constructed" << std::endl;
}

AMateria::AMateria(const AMateria &m)
{
	this->type = m.getType();
	// std::cout << "AMateria is constructed" << std::endl;
}
  
AMateria	&AMateria::operator=(const AMateria &rhs)
{
	if (this == &rhs)
		return (*this);
	return (*this);
}

std::string	const &AMateria::getType(void) const
{
	return (this->type);
}

void AMateria::use(ICharacter &target)
{
	(void) target;
	std::cout << "* Materia can't shoot " << " *" << std::endl;
}
