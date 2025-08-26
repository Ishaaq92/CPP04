/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 15:11:54 by isahmed           #+#    #+#             */
/*   Updated: 2025/08/26 16:07:19 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"


Character::Character(std::string name) : name_(name), items_(0)
{
	for (int i=0;this->inventory_[i];i++)
		this->inventory_[i] = 0;
	std::cout << "Character was Constructed" << std::endl;
}

Character::Character(const Character &c) : name_(c.name_), items_(0)
{
	for (int i=0;this->inventory_[i];i++)
		this->inventory_[i] = 0;
	std::cout << "Copy Constructor for Character was Called" << std::endl;
}

Character::~Character(void)
{
	std::cout << "Character was Destructed" << std::endl;
}

Character	Character::operator=(const Character &rhs)
{
	Character	c = rhs;

	return (c);
}

std::string const	&Character::getName() const
{
	return (this->name_);
}

void				Character::equip(AMateria *m)
{
		if (this->items_ == 4)
			return ;
		m->getType();
		// this->inventory_[this->items_] = m;
		this->items_++;
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

