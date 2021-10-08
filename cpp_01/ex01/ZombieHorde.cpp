/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 16:44:43 by user42            #+#    #+#             */
/*   Updated: 2021/07/22 19:33:52 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie	*zombieStock;
	int		i;

	zombieStock = new Zombie[N];
	for (i = 0 ; i < N ; i++)
	{
		zombieStock[i].setName(name);
	}

	return (zombieStock);
}