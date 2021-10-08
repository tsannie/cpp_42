/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 14:02:35 by tsannie           #+#    #+#             */
/*   Updated: 2021/09/06 15:53:18 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << BBLUE "[FragTrap] Default constructor has been used !" END
			<< std::endl;
	this->_name = "Moldu";
	this->_hit = 100;
	this->_energy = 100;
	this->_attack = 30;
}

FragTrap::FragTrap( std::string name ) : ClapTrap(name)
{
	std::cout << BBLUE << "[FragTrap] " BCYAN << name
		<< BBLUE " has been created !" END << std::endl;
	this->_hit = 100;
	this->_energy = 100;
	this->_attack = 30;
}

FragTrap::FragTrap( const FragTrap & src )
{
	std::cout << BBLUE "[FragTrap] Constructor has been copy !" END << std::endl;
	this->_name = src._name;
	this->_hit = src._hit;
	this->_energy = src._energy;
	this->_attack = src._attack;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

FragTrap::~FragTrap()
{
	std::cout << BRED "[FragTrap] Destructor has been called !" END << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

FragTrap &				FragTrap::operator=( FragTrap const & rhs )
{
	std::cout << BBLUE "[FragTrap] Operator assignation has been called !" END
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

std::ostream &			operator<<( std::ostream & o, FragTrap const & i )
{
	o << BBLUE "[FragTrap]" << std::endl;
	o << BBLUE "Name   = " BCYAN << i.getName() << END << std::endl;
	o << BBLUE "Hit    = " BCYAN << i.getHit() << END << std::endl;
	o << BBLUE "Energy = " BCYAN << i.getEnergy() << END << std::endl;
	o << BBLUE "Attack = " BCYAN << i.getAttack() << END << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	FragTrap::attack( std::string const & target )
{
	if (this->_energy > 0)
	{
		this->_energy--;
		std::cout << BBLUE "[FragTrap] " BCYAN << this->_name
			<< BBLUE " attack " BWHITE << target
			<< BBLUE ", causing " BRED << this->_attack
			<< BBLUE " points of damage !" END << std::endl;
	}
	else
	{
		std::cout << BBLUE "[FragTrap] " BCYAN << this->_name
			<< BBLUE "Try to attack " BWHITE << target
			<< BBLUE " but he is too tired." END << std::endl;
	}
}

void	FragTrap::highFivesGuys()
{
	std::cout << BBLUE "[FragTrap] Look out, everybody, things are about"
		" to get awesome!" END << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
