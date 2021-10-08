/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 09:20:13 by tsannie           #+#    #+#             */
/*   Updated: 2021/09/02 17:46:10 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	player1("Oso");
	std::cout << player1;
	player1.guardGate();
	std::cout << std::endl;

	ScavTrap	player2;
	player2 = player1;
	std::cout << player2 << std::endl;

}


