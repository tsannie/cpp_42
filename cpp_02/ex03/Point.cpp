/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 19:59:25 by tsannie           #+#    #+#             */
/*   Updated: 2021/09/22 07:55:12 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Point::Point(): _x(Fixed(0)), _y(Fixed(0))
{
}

Point::Point( Fixed const x, Fixed const y ): _x(Fixed(x)), _y(Fixed(y))
{
}

Point::Point( const Point & src ): _x(src.getX()), _y(src.getY())
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Point::~Point()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Point &				Point::operator=( Point const & rhs )
{
	if ( this != &rhs )
	{
		(void)rhs;
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

Fixed const	&Point::getX(void) const { return this->_x; }

Fixed const	&Point::getY(void) const { return this->_y; }

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */