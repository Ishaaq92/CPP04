/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 15:11:54 by isahmed           #+#    #+#             */
/*   Updated: 2026/03/01 11:32:01 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name) : name_(name), items_(0)
{
	for (int i=0;i<4;i++)
		this->inventory_[i] = NULL;
	// std::cout << "Character was Constructed" << std::endl;
}

Character::Character(const Character &c)
{
	for (int i=0;i<4;i++)
		this->inventory_[i] = NULL;
	*this = c;
	// std::cout << "Copy Constructor for Character was Called" << std::endl;
}

Character::~Character(void)
{
	for (int i=0;i<4;i ++)
		if (this->inventory_[i])
			delete this->inventory_[i];
	// std::cout << "Character was Destructed" << std::endl;
}

Character	&Character::operator=(const Character &rhs)
{
	if (this == &rhs)
		return (*this);
	this->name_ = rhs.name_;
	this->items_ = rhs.items_;
	for (int i=0;i < 4; i++)
		if (this->inventory_[i])
			delete this->inventory_[i];
	for (int i=0;i < 4; i++)
	{
		if (rhs.inventory_[i])
			this->inventory_[i] = rhs.inventory_[i]->clone();
		else
			this->inventory_[i] = NULL;
	}
	return (*this);
}

std::string const	&Character::getName() const
{
	return (this->name_);
}

void		Character::equip(AMateria *m)
{
	int	i;

	i = -1;
	if (!m || this->items_ > 3)
		return ;
	while (++i < 4)
		if (NULL == this->inventory_[i])
			break ;
	if (i == 4)
		return ;
	this->inventory_[i] = m;
	this->items_++;
	// std::cout << this->getName() << " has equipped " << m->getType() << std::endl;
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx > 3 || this->items_ == 0 || !this->inventory_[idx])
		return ;
	this->items_--;
	// std::cout << this->getName() << " has unequipped " << this->inventory_[idx]->getType() << std::endl;
	this->inventory_[idx] = NULL;
}

void	Character::use(int idx, ICharacter &target)
{
	if (this->items_ < 1 || idx < 0 || idx > 3 || !this->inventory_[idx])
		return ;
	this->inventory_[idx]->use(target);
}
