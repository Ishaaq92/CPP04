/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaaq <ishaaq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 10:57:20 by ishaaq            #+#    #+#             */
/*   Updated: 2026/02/22 11:56:06 by ishaaq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Animal.hpp"
# include <iostream>

class Cat : public Animal
{
	private:

	protected:

	public:
		Cat(void);
		~Cat(void);
		Cat(const Cat &c);
		Cat	&operator=(const Cat &rhs);
		void	makeSound(void) const;
};
