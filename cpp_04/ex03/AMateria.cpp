/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 08:12:45 by tsannie           #+#    #+#             */
/*   Updated: 2021/09/08 16:47:15 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AMateria::AMateria()
{
}

AMateria::AMateria( const AMateria & src )
{
	*this = src;
}

AMateria::AMateria(std::string const & type) : _type(type)
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AMateria::~AMateria()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AMateria &				AMateria::operator=( AMateria const & rhs )
{
	if ( this != &rhs )
	{
		this->_type = rhs._type;
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

std::string			const & AMateria::getType() const { return this->_type; }

void		AMateria::use(ICharacter& target)
{
	std::cout << "* Nothing for " << target.getName() << " *" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
