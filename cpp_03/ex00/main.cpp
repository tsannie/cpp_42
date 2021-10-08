/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 09:20:13 by tsannie           #+#    #+#             */
/*   Updated: 2021/09/02 17:18:26 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap perso1("John");
	std::cout << std::endl;
	//clap1 = perso1;

	std::cout << perso1;
	perso1.takeDamage(5);
	std::cout << perso1;
	perso1.takeDamage(15);
	std::cout << perso1 << std::endl;

	perso1.attack("Phil");
	perso1.attack("Joe");
	std::cout << perso1 << std::endl;

	perso1.beRepaired(5);
	std::cout << perso1 << std::endl;
	perso1.beRepaired(1);
	std::cout << perso1 << std::endl;

	ClapTrap perso2;

	perso2 = perso1;
	std::cout << perso2 << std::endl;
}


