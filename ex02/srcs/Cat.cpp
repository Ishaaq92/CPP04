/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 11:10:14 by ishaaq            #+#    #+#             */
/*   Updated: 2026/03/01 09:58:47 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat(void)
{
	this->_type = "Cat";
	this->_brain= new Brain();
	std::cout << "Cat has been constructed" << std::endl;
}

Cat::~Cat(void) 
{
	delete this->_brain;
	std::cout << "Cat has been destructed" << std::endl;
}

Cat::Cat(const Cat &c)
{
	this->_type = c.getType();
	this->_brain = new Brain(*c._brain);
	std::cout << "Cat has been constructed" << std::endl;
}

Cat		&Cat::operator=(const Cat &rhs)
{
	if (this == &rhs)
		return (*this);
	this->_type = rhs._type;
	*this->_brain = *rhs._brain;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Cat meows" << std::endl;
}
