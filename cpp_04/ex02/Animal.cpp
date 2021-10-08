/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 13:08:41 by tsannie           #+#    #+#             */
/*   Updated: 2021/09/07 15:22:58 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Animal::Animal()
{
	std::cout << BWHITE "[Animal] Default constructor has been used !" END
		<< std::endl;
	this->_type = "Animal";
}

Animal::Animal( const Animal & src )
{
	std::cout << BWHITE "[Animal] Constructor has been copy !" END << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Animal::~Animal()
{
	std::cout << BRED "[Animal] Destructor has been called !" END << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Animal &				Animal::operator=( Animal const & rhs )
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

std::string	Animal::getType() const { return this->_type; }

void	Animal::makeSound() const
{
	std::cout << BWHITE"[Animal] Miaouaaafou ?" END << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
