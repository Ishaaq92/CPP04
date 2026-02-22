/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaaq <ishaaq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 10:57:16 by ishaaq            #+#    #+#             */
/*   Updated: 2026/02/22 11:55:29 by ishaaq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

class WrongAnimal
{
	private:

	protected:
		std::string _type;

	public:
		WrongAnimal(void);
		virtual ~WrongAnimal(void);
		WrongAnimal(const WrongAnimal &wa);
		WrongAnimal(std::string type);
		WrongAnimal &operator=(const WrongAnimal &rhs);
		void	makeSound(void) const;
		std::string		getType(void) const;
};
