/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 10:57:34 by ishaaq            #+#    #+#             */
/*   Updated: 2026/03/01 09:38:13 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include "Brain.hpp"

class AAnimal
{
	private:

	protected:
		std::string _type;

	public:
		AAnimal(void);
		virtual ~AAnimal(void);
		AAnimal(const AAnimal &a);
		AAnimal	&operator=(const AAnimal &rhs);
		AAnimal(std::string type);
		virtual void	makeSound(void) const = 0;
		std::string		getType(void) const;
};
