/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 13:08:41 by tsannie           #+#    #+#             */
/*   Updated: 2021/09/07 15:26:35 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongAnimal::WrongAnimal()
{
	std::cout << BWHITE "[WrongAnimal] Default constructor has been used !" END
		<< std::endl;
	this->_type = "WrongAnimal";
}

WrongAnimal::WrongAnimal( const WrongAnimal & src )
{
	std::cout << BWHITE "[WrongAnimal] Constructor has been copy !" END << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongAnimal::~WrongAnimal()
{
	std::cout << BRED "[WrongAnimal] Destructor has been called !" END << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongAnimal &				WrongAnimal::operator=( WrongAnimal const & rhs )
{
	if ( this != &rhs )
	{
		this->_type = rhs.getType();
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

std::string	WrongAnimal::getType() const { return this->_type; }

void	WrongAnimal::makeSound() const
{
	std::cout << BWHITE"[WrongAnimal] Miaouaaafou ?" END << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
