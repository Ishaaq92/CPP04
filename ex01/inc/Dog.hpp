/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaaq <ishaaq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 10:57:18 by ishaaq            #+#    #+#             */
/*   Updated: 2026/02/22 12:31:59 by ishaaq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Animal.hpp"

class Dog : public Animal
{
	private:
		Brain	*_brain;

	protected:

	public:
		Dog(void);
		~Dog(void);
		Dog(const Dog &d);
		Dog		&operator=(const Dog &rhs);
		void	makeSound(void) const;
};
