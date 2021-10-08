/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 09:20:13 by tsannie           #+#    #+#             */
/*   Updated: 2021/09/25 17:32:40 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	player1("Oso");
	
	std::cout << player1;
	player1.whoAmI();
	player1.attack("Pot");
	std::cout << std::endl;
}


