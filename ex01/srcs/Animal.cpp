/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaaq <ishaaq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 11:02:46 by ishaaq            #+#    #+#             */
/*   Updated: 2026/02/22 11:56:41 by ishaaq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(std::string type) : _type(type)
{
	std::cout << "Animal is constructed" << std::endl;
}

Animal::Animal(void) : _type("No Type")
{
	std::cout << "Animal is constructed" << std::endl;
}

Animal::Animal(const Animal &a)
{
	this->_type = a._type;
	std::cout << "Animal is constructed" << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "Animal is destructed" << std::endl;
}

void	Animal::makeSound(void) const
{
	std::cout << "Animal makes noise" << std::endl;
}

std::string	Animal::getType(void) const
{
	return (this->_type);
}

Animal	&Animal::operator=(const Animal &rhs)
{
	this->_type = rhs._type;
	return (*this);
}
