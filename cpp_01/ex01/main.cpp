/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 16:24:41 by user42            #+#    #+#             */
/*   Updated: 2021/07/22 19:42:05 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*test;
	int		N = 10;

	test = zombieHorde(N, "Isiog");

	for (int i = 0 ; i < N ; i++)
		test[i].announce();

	delete [] test;
}