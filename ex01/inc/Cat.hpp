/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaaq <ishaaq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 10:57:20 by ishaaq            #+#    #+#             */
/*   Updated: 2026/02/22 12:31:53 by ishaaq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Animal.hpp"

class Cat : public Animal
{
	private:
		Brain	*_brain;

	protected:

	public:
		Cat(void);
		~Cat(void);
		Cat(const Cat &c);
		Cat	&operator=(const Cat &rhs);
		void	makeSound(void) const;
};
