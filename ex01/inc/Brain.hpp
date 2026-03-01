/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaaq <ishaaq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 12:03:50 by ishaaq            #+#    #+#             */
/*   Updated: 2026/02/22 13:02:17 by ishaaq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

class Brain
{
	private:

	protected:
		std::string	_ideas[100];

	public:
		Brain(void);
		~Brain(void);
		Brain(const Brain &b);
		Brain	&operator=(const Brain &rhs);
		void	printIdeas(void);
		void	setIdea(const std::string idea, const int i);
		Brain	&getBrain(void);
};
