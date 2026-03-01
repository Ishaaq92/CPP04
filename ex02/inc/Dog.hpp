/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 10:57:18 by ishaaq            #+#    #+#             */
/*   Updated: 2026/03/01 09:58:35 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "AAnimal.hpp"

class Dog : public AAnimal
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
