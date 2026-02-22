/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaaq <ishaaq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 11:25:13 by ishaaq            #+#    #+#             */
/*   Updated: 2026/02/22 11:57:50 by ishaaq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	this->_type = "Cat";
	std::cout << "WrongCat has been Constructed" << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat has been Destructed" << std::endl;
}

WrongCat::WrongCat(const WrongCat &wc)
{
	this->_type = wc.getType();
	std::cout << "WrongCat has been Constructed" << std::endl;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "WrongCat meows" << std::endl;
}

WrongCat		&WrongCat::operator=(const WrongCat &rhs)
{
	this->_type = rhs._type;
	return (*this);
}
