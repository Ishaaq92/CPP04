/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 11:36:24 by isahmed           #+#    #+#             */
/*   Updated: 2026/03/01 11:36:27 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include "AMateria.hpp"

class IMateriaSource
{
	private:

	protected:

	public:
		virtual ~IMateriaSource(void) {}
		virtual	void	learnMateria(AMateria *) = 0;
		virtual	AMateria	*createMateria(std::string const &type) = 0;
};
