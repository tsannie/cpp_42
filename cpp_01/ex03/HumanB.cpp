/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 17:35:19 by tsannie           #+#    #+#             */
/*   Updated: 2021/05/24 18:32:03 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanB.hpp"

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

void	HumanB::attack(void) const
{
	std::cout << this->_name << " attacks with his " << this->_weapon->getType()
		<< std::endl;
}

HumanB::HumanB(std::string name) : _name(name)
{
	return ;
}
