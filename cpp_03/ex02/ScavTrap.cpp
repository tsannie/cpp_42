/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 14:02:35 by tsannie           #+#    #+#             */
/*   Updated: 2021/09/06 15:52:54 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << BGREEN "[ScavTrap] Default constructor has been used !" END
			<< std::endl;
	this->_name = "Moldu";
	this->_hit = 100;
	this->_energy = 50;
	this->_attack = 20;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name)
{
	std::cout << BGREEN << "[ScavTrap] " BCYAN << name
		<< BGREEN " has been created !" END << std::endl;
	this->_hit = 100;
	this->_energy = 50;
	this->_attack = 20;
}

ScavTrap::ScavTrap( const ScavTrap & src )
{
	std::cout << BGREEN "[ScavTrap] Constructor has been copy !" END << std::endl;
	this->_name = src._name;
	this->_hit = src._hit;
	this->_energy = src._energy;
	this->_attack = src._attack;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ScavTrap::~ScavTrap()
{
	std::cout << BRED "[ScavTrap] Destructor has been called !" END << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ScavTrap &				ScavTrap::operator=( ScavTrap const & rhs )
{
	std::cout << BGREEN "[ScavTrap] Operator assignation has been called !" END
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

std::ostream &			operator<<( std::ostream & o, ScavTrap const & i )
{
	o << BGREEN "[ScavTrap]" << std::endl;
	o << BGREEN "Name   = " BCYAN << i.getName() << END << std::endl;
	o << BGREEN "Hit    = " BCYAN << i.getHit() << END << std::endl;
	o << BGREEN "Energy = " BCYAN << i.getEnergy() << END << std::endl;
	o << BGREEN "Attack = " BCYAN << i.getAttack() << END << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	ScavTrap::attack( std::string const & target )
{
	if (this->_energy > 0)
	{
		this->_energy--;
		std::cout << BGREEN "[ScavTrap] " BCYAN << this->_name
			<< BGREEN " attack " BWHITE << target
			<< BGREEN ", causing " BRED << this->_attack
			<< BGREEN " points of damage !" END << std::endl;
	}
	else
	{
		std::cout << BGREEN "[ScavTrap] " BCYAN << this->_name
			<< BGREEN "Try to attack " BWHITE << target
			<< BGREEN " but he is too tired." END << std::endl;
	}
}

void	ScavTrap::guardGate()
{
	std::cout << BGREEN "[ScavTrap] Have enterre din Gate keeper mode !" END
			<< std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
