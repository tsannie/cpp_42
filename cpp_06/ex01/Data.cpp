/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 11:00:06 by tsannie           #+#    #+#             */
/*   Updated: 2021/09/21 12:46:48 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Data::Data()
{
}

Data::Data( const Data & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Data::~Data()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Data &				Data::operator=( Data const & rhs )
{
	if ( this != &rhs )
	{
		this->_test = rhs.getTest();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Data const & i )
{
	o << BBLUE << i.getTest() << END;
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void		Data::setTest( std::string test ) { this->_test = test; }

std::string	Data::getTest( void ) const { return (this->_test); }

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
