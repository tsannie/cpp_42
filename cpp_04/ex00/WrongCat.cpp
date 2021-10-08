/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 13:12:23 by tsannie           #+#    #+#             */
/*   Updated: 2021/09/07 15:25:55 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongCat::WrongCat()
{
	std::cout << BGREEN "[WrongCat] Default constructor has been used !" END
		<< std::endl;
	this->_type = "WrongCat";
}

WrongCat::WrongCat( const WrongCat & src )
{
	std::cout << BGREEN "[WrongCat] Constructor has been copy !" END << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongCat::~WrongCat()
{
	std::cout << BRED "[WrongCat] Destructor has been called !" END << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongCat &				WrongCat::operator=( WrongCat const & rhs )
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

void	WrongCat::makeSound() const
{
	std::cout << BGREEN "[WrongCat] Miaouuu !" END << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
