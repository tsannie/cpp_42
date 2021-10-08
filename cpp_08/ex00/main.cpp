/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 17:30:18 by tsannie           #+#    #+#             */
/*   Updated: 2021/10/01 11:36:07 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main(void)
{
	{
	int				i;
	std::list<int>	tab;


	std::cout << YELLOW "Test 1 with list:" << END << std::endl;
	std::cout << BWHITE "tab = [ ";
	for (i = 0 ; i < 10 ; i++)
	{
		tab.push_back(i);
		std::cout << i;
		if (i != 9)
			std::cout << ", ";
	}
	std::cout << " ]" END << std::endl ;

	try
	{
		std::cout << BCYAN << "easyfind(tab, 0)  = " BWHITE
			<< easyfind(tab, 0) << END << std::endl;
		std::cout << BCYAN << "easyfind(tab, 5)  = " BWHITE
			<< easyfind(tab, 5) << END << std::endl;
		std::cout << BCYAN << "easyfind(tab, 9)  = " BWHITE
			<< easyfind(tab, 9) << END << std::endl;
		std::cout << BCYAN << "easyfind(tab, 10) = " BWHITE	// impossible
			<< easyfind(tab, 10) << END << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	}

	{
	int					i;
	std::vector<int>	tab;


	std::cout << YELLOW "Test 2 with vector:" << END << std::endl;
	std::cout << BWHITE "tab = [ ";
	for (i = 0 ; i < 10 ; i++)
	{
		tab.push_back(i * 10);
		std::cout << i * 10;
		if (i != 9)
			std::cout << ", ";
	}
	std::cout << " ]" END << std::endl ;

	try
	{
		std::cout << BCYAN << "easyfind(tab, 0)  = " BWHITE
			<< easyfind(tab, 0) << END << std::endl;
		std::cout << BCYAN << "easyfind(tab, 50) = " BWHITE
			<< easyfind(tab, 50) << END << std::endl;
		std::cout << BCYAN << "easyfind(tab, 90) = " BWHITE
			<< easyfind(tab, 90) << END << std::endl;
		std::cout << BCYAN << "easyfind(tab, 1)  = " BWHITE		// impossible
			<< easyfind(tab, 1) << END << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	}

	{
	int					i;
	std::deque<int>	tab;


	std::cout << YELLOW "Test 3 with deque:" << END << std::endl;
	std::cout << BWHITE "tab = [ ";
	for (i = 0 ; i < 10 ; i++)
	{
		tab.push_back(i * 100);
		std::cout << i * 100;
		if (i != 9)
			std::cout << ", ";
	}
	std::cout << " ]" END << std::endl ;

	try
	{
		std::cout << BCYAN << "easyfind(tab, 0)   = " BWHITE
			<< easyfind(tab, 0) << END << std::endl;
		std::cout << BCYAN << "easyfind(tab, 500) = " BWHITE
			<< easyfind(tab, 500) << END << std::endl;
		std::cout << BCYAN << "easyfind(tab, 900) = " BWHITE
			<< easyfind(tab, 900) << END << std::endl;
		std::cout << BCYAN << "easyfind(tab, 1)   = " BWHITE		// impossible
			<< easyfind(tab, 1) << END << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	}
}
