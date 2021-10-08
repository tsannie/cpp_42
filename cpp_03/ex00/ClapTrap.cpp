/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 09:27:53 by tsannie           #+#    #+#             */
/*   Updated: 2021/09/25 14:39:16 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ClapTrap::ClapTrap( void ) : _name("Moldu"), _hit(10), _energy(10), _attack(0)
{
	std::cout << BYELLOW "[ClapTrap] Default constructor has been used !" END
			<< std::endl;
}

ClapTrap::ClapTrap( std::string name ) : _name(name), _hit(10), _energy(10), _attack(0)
{
	std::cout << BYELLOW "[ClapTrap] " BCYAN << name
		<< BYELLOW " has been created !" END << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap & src )
{
	std::cout << BYELLOW "[ClapTrap] Constructor has been copy !" END << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ClapTrap::~ClapTrap()
{
	std::cout << BRED "[ClapTrap] Destructor has been called !" END << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ClapTrap &				ClapTrap::operator=( ClapTrap const & rhs )
{
	std::cout << BYELLOW "[ClapTrap] Operator assignation has been called !" END
			<< std::endl;
	if ( this != &rhs )
	{
		this->_name = rhs._name;
		this->_hit = rhs._hit;
		this->_energy = rhs._energy;
		this->_attack = rhs._attack;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, ClapTrap const & i )
{
	o << BYELLOW "Name   = " BCYAN << i.getName() << END << std::endl;
	o << BYELLOW "Hit    = " BCYAN << i.getHit() << END << std::endl;
	o << BYELLOW "Energy = " BCYAN << i.getEnergy() << END << std::endl;
	o << BYELLOW "Attack = " BCYAN << i.getAttack() << END << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	ClapTrap::attack(std::string const & target)
{
	if (this->_energy > 0)
	{
		this->_energy--;
		std::cout << BYELLOW "[ClapTrap] " BCYAN << this->_name
			<< BYELLOW " attack " BWHITE << target
			<< BYELLOW ", causing " BRED << this->_attack
			<< BYELLOW " points of damage !" END << std::endl;
	}
	else
	{
		std::cout << BYELLOW "[ClapTrap] " BCYAN << this->_name
			<< BYELLOW "Try to attack " BWHITE << target
			<< BYELLOW " but he is too tired." END << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (amount > this->_hit)
		this->_hit = 0;
	else
		this->_hit -= amount;
	std::cout << BYELLOW "[ClapTrap] " BCYAN << this->_name
		<< BYELLOW " is attacked and loses " BWHITE << amount
		<< BYELLOW " hit points !" END << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	this->_hit += amount;
	this->_energy++;
	std::cout << BYELLOW "[ClapTrap] " BCYAN << this->_name
		<< BYELLOW " is healed by " BGREEN << amount
		<< BYELLOW " hit points and receive " BGREEN "1"
		<< BYELLOW " energy point ! " END << std::endl;
}

std::string		ClapTrap::getName( void ) const { return(this->_name); }

unsigned int	ClapTrap::getHit( void ) const { return(this->_hit); }

unsigned int	ClapTrap::getEnergy( void ) const { return(this->_energy); }

unsigned int	ClapTrap::getAttack( void ) const { return(this->_attack); }

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
