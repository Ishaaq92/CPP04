/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaaq <ishaaq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 11:06:00 by ishaaq            #+#    #+#             */
/*   Updated: 2026/02/22 13:20:36 by ishaaq           ###   ########.fr       */
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
	Brain	b = new Brain(&d._brain);
	this->_type = d.getType();
	this->_brain = b;
	std::cout << "Dog has been constructed" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "Dog barks" << std::endl;
}

Dog		&Dog::operator=(const Dog &rhs)
{
	this->_type = rhs._type;
	this->_brain = rhs._brain;
	return (*this);
}
