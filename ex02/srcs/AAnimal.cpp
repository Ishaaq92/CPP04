/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 11:02:46 by ishaaq            #+#    #+#             */
/*   Updated: 2026/03/01 09:48:54 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(std::string type) : _type(type)
{
	std::cout << "Animal is constructed" << std::endl;
}

AAnimal::AAnimal(void) : _type("No Type")
{
	std::cout << "Animal is constructed" << std::endl;
}

AAnimal::AAnimal(const AAnimal &a)
{
	this->_type = a._type;
	std::cout << "Animal is constructed" << std::endl;
}

AAnimal::~AAnimal(void)
{
	std::cout << "Animal is destructed" << std::endl;
}

std::string	AAnimal::getType(void) const
{
	return (this->_type);
}

AAnimal	&AAnimal::operator=(const AAnimal &rhs)
{
	this->_type = rhs._type;
	return (*this);
}
