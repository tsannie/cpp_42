/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 08:41:14 by tsannie           #+#    #+#             */
/*   Updated: 2021/09/27 13:29:49 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character(): _name("User")
{
	int	i;

	for (i = 0 ; i < 4 ; i++)
		this->_inventory[i] = NULL;
}

Character::Character( const Character & src )
{
	*this = src;
}

Character::Character( const std::string & name ): _name(name)
{
	int	i;

	for (i = 0 ; i < 4 ; i++)
		this->_inventory[i] = NULL;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Character::~Character()
{
	int	i;

	for (i = 0 ; i < 4 && this->_inventory[i]; i++)
		delete this->_inventory[i];
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Character &				Character::operator=( Character const & rhs )
{
	int	i;

	if ( this != &rhs )
	{
		this->_name = rhs._name; // to check
		for (i = 0 ; i < 4 ; i++)
			this->_inventory[i] = rhs._inventory[i];
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

std::string const & Character::getName() const { return this->_name; }

void	Character::equip(AMateria* m)
{
	int	i;

	for (i = 0 ; i < 4 ; i++)
	{
		if (!this->_inventory[i])
		{
			this->_inventory[i] = m;
			break;
		}
	}
}

void	Character::unequip(int idx)
{
	int	i;

	if ((idx >= 0 && idx < 4) && this->_inventory[idx])
	{
		this->_inventory[idx] = NULL;
		for (i = 0 ; i < 3 ; i++)
		{
			if (!this->_inventory[i] && this->_inventory[i + 1])
			{
				this->_inventory[i] = this->_inventory[i + 1];
				this->_inventory[i + 1] = NULL;
			}
		}
	}
}

void	Character::use(int idx, ICharacter& target)
{
	if ((idx >= 0 && idx < 4) && this->_inventory[idx])
		this->_inventory[idx]->use(target);
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
