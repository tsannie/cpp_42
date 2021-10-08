/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 19:49:46 by tsannie           #+#    #+#             */
/*   Updated: 2021/09/30 13:14:31 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main()
{
	{
	Span sp = Span(5);

	std::cout << YELLOW "Test 1 (main given) :" << END << std::endl;
	std::cout << std::endl;

	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << BCYAN "Vector = " BWHITE << sp << END << std::endl;

	std::cout << BBLUE "ShortestSpan = " BWHITE << sp.shortestSpan()
		<< END << std::endl;
	std::cout << BBLUE "LongestSpan  = " BWHITE << sp.longestSpan()
		<< END << std::endl;
	std::cout << std::endl;
	}

	{
	std::cout << "-----------------------------------------" << std::endl;
	std::cout << YELLOW "Test 2 (stress test) :\n" << END << std::endl;

	Span sp1 = Span(101);
	Span sp2 = Span(100001);

	std::cout << BBLUE "100 :" << END << std::endl;
	sp1.addNumbers(0,100);
	std::cout << BCYAN "Vector = " BWHITE << sp1 << END << std::endl;

	std::cout << std::endl;
	std::cout << BBLUE "100000 :" << END << std::endl;
	sp2.addNumbers(0,100000);
	//std::cout << BCYAN "Vector = " BWHITE << sp2 << END << std::endl;

	std::cout << std::endl;
	}

	{
	std::cout << "-----------------------------------------" << std::endl;
	std::cout << YELLOW "Test 3 [Shortest/Longest] Span) :\n" << END << std::endl;

	Span sp = Span(4);

	sp.addNumber(2147483647);
	sp.addNumber(-2147483648);
	std::cout << BCYAN "Vector = " BWHITE << sp << END << std::endl;
	std::cout << BBLUE "ShortestSpan = " BWHITE << sp.shortestSpan()
		<< END << std::endl;
	std::cout << BBLUE "LongestSpan  = " BWHITE << sp.longestSpan()
		<< END << std::endl;
	std::cout << std::endl;

	sp.addNumber(0);
	std::cout << BCYAN "Vector = " BWHITE << sp << END << std::endl;
	std::cout << BBLUE "ShortestSpan = " BWHITE << sp.shortestSpan()
		<< END << std::endl;
	std::cout << BBLUE "LongestSpan  = " BWHITE << sp.longestSpan()
		<< END << std::endl;
	std::cout << std::endl;

	sp.addNumber(1);
	std::cout << BCYAN "Vector = " BWHITE << sp << END << std::endl;
	std::cout << BBLUE "ShortestSpan = " BWHITE << sp.shortestSpan()
		<< END << std::endl;
	std::cout << BBLUE "LongestSpan  = " BWHITE << sp.longestSpan()
		<< END << std::endl;

	std::cout << std::endl;
	}

	{
	std::cout << "-----------------------------------------" << std::endl;
	std::cout << YELLOW "Test 4 (all exception) :" << END << std::endl;

	try
	{
		Span sp = Span(0);
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Span sp = Span(2);
		sp.addNumber(5);
		sp.addNumber(5);
		sp.addNumber(5);
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Span sp = Span(2);
		sp.addNumber(5);
		std::cout << BBLUE "ShortestSpan = " BWHITE << sp.shortestSpan()
			<< END << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Span sp = Span(2);
		sp.addNumber(5);
		std::cout << BBLUE "LongestSpan  = " BWHITE << sp.longestSpan()
			<< END << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Span sp = Span(20);
		sp.addNumbers(5, 3);
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	}
}
