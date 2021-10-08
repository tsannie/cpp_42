/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 11:18:58 by user42            #+#    #+#             */
/*   Updated: 2021/07/22 16:22:11 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::~Zombie(void)
{
	std::cout << BRED ;
	std::cout << this->_name << END <<" fell from a high place" << std::endl;
}

Zombie::Zombie(std::string name)
: _name(name)
{
	return ;
}

void	Zombie::announce(void)
{
	std::cout << "<" << BCYAN << this->_name << END 
	<< "> " << " BraiiiiiiinnnzzzZ..." << std::endl;
}
