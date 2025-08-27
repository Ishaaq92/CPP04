/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaaq <ishaaq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 15:30:58 by ishaaq            #+#    #+#             */
/*   Updated: 2025/08/27 15:32:39 by ishaaq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : type(type)
{
	// std::cout << "AMateria is constructed" << std::endl;
}
AMateria::~AMateria(void)
{
	// std::cout << "AMateria is constructed" << std::endl;
}

std::string	const &AMateria::getType(void) const
{
	return (this->type);
}

