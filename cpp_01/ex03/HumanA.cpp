/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 17:31:21 by tsannie           #+#    #+#             */
/*   Updated: 2021/05/24 18:22:55 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void	HumanA::attack(void) const
{
	std::cout << this->_name << " attacks with his " << this->_weapon.getType()
		<< std::endl;
}

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
	return ;
}
