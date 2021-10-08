/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 16:03:55 by tsannie           #+#    #+#             */
/*   Updated: 2021/04/03 17:05:21 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(int ac, char **av)
{
	int e;
	int i;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (i = 1 ; i < ac ; i++)
	{
		for (e = 0 ; av[i][e] ; e++)
			std::cout << char(toupper(av[i][e]));
	}
	std::cout << std::endl;

	return (0);
}
