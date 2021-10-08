/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 16:24:41 by user42            #+#    #+#             */
/*   Updated: 2021/07/22 16:39:01 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *test;

	test = newZombie("Got");
	test->announce();
	test->announce();

	randomChump("Oso");
	randomChump("Devis");
	
	test->announce();
	test->announce();

	delete test;	
}