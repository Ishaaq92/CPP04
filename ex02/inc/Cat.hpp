/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 10:57:20 by ishaaq            #+#    #+#             */
/*   Updated: 2026/03/01 09:58:18 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "AAnimal.hpp"

class Cat : public AAnimal
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
