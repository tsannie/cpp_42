/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 11:01:58 by tsannie           #+#    #+#             */
/*   Updated: 2021/09/27 15:18:27 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	{
	std::cout << YELLOW "Test 1 (\"Oso\", 0) :" END << std::endl;
	try
	{
		Bureaucrat		oso("Oso", 0);
		std::cout << oso << std::endl;	// not use
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl << std::endl;
	}

	std::cout << "-----------------------------"
		<< std::endl << YELLOW "Test 2 (\"Box\", 151) :" END << std::endl;
	try
	{
		Bureaucrat		box("Box", 151);
		std::cout << box << std::endl;	// not use
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl << std::endl;
	}

	std::cout << "-----------------------------"
		<< std::endl << YELLOW "Test 3 (\"Yan\", 130) :" END << std::endl;
	try
	{
		Bureaucrat		yan("Yan", 130);
		std::cout << yan << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl << std::endl;	// not use
	}
	}

	{
	std::cout << "-----------------------------"
		<< std::endl << YELLOW "Test decr (\"Pel\", 149) :" END << std::endl;
	try
	{
		Bureaucrat		pel("Pel", 149);
		std::cout << pel << std::endl;
		pel.decrGrad();
		std::cout << pel << std::endl;
		pel.decrGrad();
		std::cout << pel << std::endl;	// not use
		pel.decrGrad();					// not use
		std::cout << pel << std::endl;	// not use
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl << std::endl;
	}

	std::cout << "-----------------------------"
		<< std::endl << YELLOW "Test incr (\"Lou\", 2) :" END << std::endl;
	try
	{
		Bureaucrat		lou("Lou", 2);
		std::cout << lou << std::endl;
		lou.incrGrad();
		std::cout << lou << std::endl;
		lou.incrGrad();
		std::cout << lou << std::endl;	// not use
		lou.incrGrad();					// not use
		std::cout << lou << std::endl;	// not use
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl << std::endl;
	}
	}
}
