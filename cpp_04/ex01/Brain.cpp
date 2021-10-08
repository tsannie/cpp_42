/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 16:40:14 by tsannie           #+#    #+#             */
/*   Updated: 2021/09/08 07:14:07 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Brain::Brain()
{
	std::cout << BBLUE "[Brain] Default constructor has been used !" END
		<< std::endl;
}

Brain::Brain( const Brain & src )
{
	std::cout << BBLUE "[Brain] Constructor has been copy !" END << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Brain::~Brain()
{
	std::cout << BRED "[Brain] Destructor has been called !" END << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Brain &				Brain::operator=( Brain const & rhs )
{
	int i;

	if ( this != &rhs )
	{
		for (i = 0 ; i < 100 ; i++)
			this->_ideas[i] = rhs._ideas[i];
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
