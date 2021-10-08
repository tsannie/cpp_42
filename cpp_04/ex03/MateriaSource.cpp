/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 08:41:27 by tsannie           #+#    #+#             */
/*   Updated: 2021/09/13 08:36:22 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

MateriaSource::MateriaSource()
{
	int	i;

	for (i = 0 ; i < 4 ; i++)
		this->_inventory[i] = NULL;
}

MateriaSource::MateriaSource( MateriaSource const & src )
{
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

MateriaSource::~MateriaSource()
{
	int	i;

	for (i = 0; i < 4 ; i++)
	{
		if (this->_inventory[i])
			delete _inventory[i];
	}
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

MateriaSource &				MateriaSource::operator=( MateriaSource const & rhs )
{
	int	i;

	if ( this != &rhs )
	{
		for (i = 0 ; i < 4 ; i++)
			this->_inventory[i] = rhs._inventory[i];
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void		MateriaSource::learnMateria(AMateria* j)
{
	int	i;

	for (i = 0 ; i < 4 ; i++)
	{
		if (!this->_inventory[i])
		{
			this->_inventory[i] = j;
			break;
		}
	}
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4 && this->_inventory[i] ; i++)
	{
		if (this->_inventory[i]->getType() == type)
			return this->_inventory[i]->clone();
	}
	return 0;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
