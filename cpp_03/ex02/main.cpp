/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 09:20:13 by tsannie           #+#    #+#             */
/*   Updated: 2021/09/25 17:26:28 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	FragTrap	player1("Oso");
	ScavTrap	player3("Edd");

	std::cout << player1 << std::endl;
	std::cout << player3 << std::endl;

	player1.highFivesGuys();

	player3.attack(player1.getName());	// player3 ScavTrap attack FragTrap
	player1.takeDamage(player3.getAttack());

	std::cout << player1 << std::endl;
	std::cout << player3 << std::endl;

	std::cout << std::endl;

	FragTrap	player2;
	player2 = player1;
	std::cout << player2 << std::endl;

}


