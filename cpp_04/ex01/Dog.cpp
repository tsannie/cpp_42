/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 13:12:36 by tsannie           #+#    #+#             */
/*   Updated: 2021/09/27 11:06:40 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog()
{
	std::cout << BYELLOW "[Dog] Default constructor has been used !" END
		<< std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
}

Dog::Dog( const Dog & src )
{
	std::cout << BYELLOW "[Dog] Constructor has been copy !" END << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
	std::cout << BRED "[Dog] Destructor has been called !" END << std::endl;
	delete this->_brain;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog &				Dog::operator=( Dog const & rhs )
{
	if ( this != &rhs )
	{
		this->_type = rhs.getType();
		if (this->_brain)
			delete this->_brain;
		this->_brain = new Brain( *rhs._brain );
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	Dog::makeSound() const
{
	std::cout << BYELLOW "[Dog] Wouaaaaaff !" END << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

Brain	*Dog::getBrain() const { return (this->_brain); }

/* ************************************************************************** */
