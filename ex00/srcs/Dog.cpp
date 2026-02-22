/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaaq <ishaaq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 11:06:00 by ishaaq            #+#    #+#             */
/*   Updated: 2026/02/22 11:57:08 by ishaaq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	this->_type = "Dog";
	std::cout << "Dog has been constructed" << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "Dog has been destructed" << std::endl;
}

Dog::Dog(const Dog &d)
{
	this->_type = d.getType();
	std::cout << "Dog has been constructed" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "Dog barks" << std::endl;
}

Dog		&Dog::operator=(const Dog &rhs)
{
	this->_type = rhs._type;
	return (*this);
}
