/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 17:07:25 by tsannie           #+#    #+#             */
/*   Updated: 2021/05/24 18:08:19 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
	return ;
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
}

std::string const	&Weapon::getType(void) const
{
	return (this->_type);
}
