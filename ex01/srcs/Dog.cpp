/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 11:06:00 by ishaaq            #+#    #+#             */
/*   Updated: 2026/03/01 09:05:44 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog(void)
{
	this->_type = "Dog";
	this->_brain = new Brain();
	std::cout << "Dog has been constructed" << std::endl;
}

Dog::~Dog(void)
{
	delete this->_brain;
	std::cout << "Dog has been destructed" << std::endl;
}

Dog::Dog(const Dog &d)
{
	this->_type = d._type;
	this->_brain = new Brain(*d._brain);
	std::cout << "Dog has been constructed" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "Dog barks" << std::endl;
}

Dog		&Dog::operator=(const Dog &rhs)
{
	if (this == &rhs)
		return (*this);
	this->_type = rhs._type;
	*this->_brain = *rhs._brain;
	return (*this);
}
