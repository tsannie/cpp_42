/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 12:38:10 by tsannie           #+#    #+#             */
/*   Updated: 2021/09/06 16:49:09 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

DiamondTrap::DiamondTrap() : ClapTrap(), FragTrap(), ScavTrap(), _name("Moldu")
{
	std::cout << BPURPLE "[DiamondTrap] Default constructor has been used !" END
			<< std::endl;
	this->ClapTrap::_name = "Moldu_clap_name";
	this->_hit = this->_fixHit;
	this->_energy = this->_fixEnergy;
	this->_attack = this->_fixAttack;
}

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap( name + "_clap_name" ),
FragTrap( name ), ScavTrap( name ), _name(name)
{
	std::cout << BPURPLE << "[DiamondTrap] " BCYAN << name
		<< BPURPLE " has been created !" END << std::endl;
	this->_hit = this->_fixHit;
	this->_energy = this->_fixEnergy;
	this->_attack = this->_fixAttack;
}

DiamondTrap::DiamondTrap( const DiamondTrap & src )
{
	std::cout << BPURPLE "[DiamondTrap] Constructor has been copy !" END << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

DiamondTrap::~DiamondTrap()
{
	std::cout << BRED "[DiamondTrap] Destructor has been called !" END << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

DiamondTrap &				DiamondTrap::operator=( DiamondTrap const & rhs )
{
	std::cout << BPURPLE "[DiamondTrap] Operator assignation has been called !" END
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

std::ostream &			operator<<( std::ostream & o, DiamondTrap const & i )
{
	o << BPURPLE "[DiamondTrap]" << std::endl;
	o << BPURPLE "Name     = " BCYAN << i.getDiamondName() << END << std::endl;
	o << BPURPLE "ClapName = " BCYAN << i.getName() << END << std::endl;
	o << BPURPLE "Hit      = " BCYAN << i.getHit() << END << std::endl;
	o << BPURPLE "Energy   = " BCYAN << i.getEnergy() << END << std::endl;
	o << BPURPLE "Attack   = " BCYAN << i.getAttack() << END << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

std::string		DiamondTrap::getDiamondName() const { return(this->DiamondTrap::_name); }

void DiamondTrap::attack(std::string const & target)
{
	this->ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << BPURPLE "[DiamondTrap] My name is " BCYAN << getDiamondName()
		<< BPURPLE "\nand my Claptrap name is " BCYAN << getName() << END
		<< BPURPLE " !" END << std::endl;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
