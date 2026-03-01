/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaaq <ishaaq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 10:57:34 by ishaaq            #+#    #+#             */
/*   Updated: 2026/02/22 12:31:47 by ishaaq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include "Brain.hpp"

class Animal
{
	private:

	protected:
		std::string _type;

	public:
		Animal(void);
		virtual ~Animal(void);
		Animal(const Animal &a);
		Animal	&operator=(const Animal &rhs);
		Animal(std::string type);
		virtual void	makeSound(void) const;
		std::string		getType(void) const;
};
