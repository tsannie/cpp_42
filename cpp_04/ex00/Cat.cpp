/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 13:12:23 by tsannie           #+#    #+#             */
/*   Updated: 2021/09/07 15:19:39 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat()
{
	std::cout << BGREEN "[Cat] Default constructor has been used !" END
		<< std::endl;
	this->_type = "Cat";
}

Cat::Cat( const Cat & src )
{
	std::cout << BGREEN "[Cat] Constructor has been copy !" END << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat()
{
	std::cout << BRED "[Cat] Destructor has been called !" END << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat &				Cat::operator=( Cat const & rhs )
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

void	Cat::makeSound() const
{
	std::cout << BGREEN "[Cat] Miaouuu !" END << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
