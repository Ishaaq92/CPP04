/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaaq <ishaaq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 11:10:14 by ishaaq            #+#    #+#             */
/*   Updated: 2026/02/22 11:56:51 by ishaaq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	this->_type = "Cat";
	std::cout << "Cat has been Constructed" << std::endl;
}

Cat::~Cat(void) 
{
	std::cout << "Cat has been Destructed" << std::endl;
}

Cat::Cat(const Cat &c)
{
	this->_type = c.getType();
	std::cout << "Cat has been Constructed" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "Cat meows" << std::endl;
}

Cat		&Cat::operator=(const Cat &rhs)
{
	this->_type = rhs._type;
	return (*this);
}
