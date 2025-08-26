/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 15:11:54 by isahmed           #+#    #+#             */
/*   Updated: 2025/08/26 17:05:26 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"


Character::Character(std::string name) : name_(name), items_(0)
{
	for (int i=0;i<4;i++)
		this->inventory_[i] = NULL;
	std::cout << "Character was Constructed" << std::endl;
}

Character::Character(const Character &c) : name_(c.name_), items_(c.items_)
{
	for (int i=0;i<4;i++)
		this->inventory_[i] = c.inventory_[i]->clone();
	std::cout << "Copy Constructor for Character was Called" << std::endl;
}

Character::~Character(void)
{
	for (int i=0;i<4;i ++)
		if (this->inventory_[i])
			delete this->inventory_[i];
	std::cout << "Character was Destructed" << std::endl;
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
		if (rhs.inventory_[i])
			this->inventory_[i] = rhs.inventory_[i];
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
	if (this->items_ == 4)
		return ;
	while (++i < 4)
		if (NULL == this->inventory_[i])
			break ;
	this->inventory_[i] = m->clone();
	this->items_++;
	std::cout << this->getName() << " has equipped " << m->getType() << std::endl;
}

void				Character::unequip(int idx)
{
	if (this->items_ == 0)
		return ;
	this->items_--;
	this->inventory_[idx]->getType();
}

void				Character::use(int idx, ICharacter &target)
{
	this->inventory_[idx]->use(target);
}

