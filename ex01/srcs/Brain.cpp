/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaaq <ishaaq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 12:05:10 by ishaaq            #+#    #+#             */
/*   Updated: 2026/02/22 13:12:27 by ishaaq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain is constructed" << std::endl;
}

Brain::~Brain(void)
{
	std::cout << "Brain is destructed" << std::endl;
}

Brain::Brain(const Brain &b)
{
	*this = b;
	std::cout << "Brain is constructed" << std::endl;
}

Brain	&Brain::getBrain(void)
{
	return (*this);
}

void	Brain::printIdeas(void)
{
	for (int i=0;i<100; i++)
		if (!this->_ideas[i].empty())
			std::cout << this->_ideas[i] << std::endl;
}

void	Brain::setIdea(std::string idea, const int i)
{
	this->_ideas[i] = idea; 
}

Brain	&Brain::operator=(const Brain &rhs)
{
	for (int i=0; i<100; i++)
	{
		this->_ideas[i] = rhs._ideas[i];
	}
	return (*this);
}
