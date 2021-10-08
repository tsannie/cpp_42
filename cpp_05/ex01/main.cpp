/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 11:01:58 by tsannie           #+#    #+#             */
/*   Updated: 2021/09/14 14:34:02 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	{
	std::cout << YELLOW "Test 1 (\"doc\", 0, 1) :" END << std::endl;
	try
	{
		Form		doc1("doc1", 0, 1);
		std::cout << doc1 << std::endl;	// not use
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl << std::endl;
	}
	std::cout << YELLOW "Test 2 (\"doc\", 1, 151) :" END << std::endl;
	try
	{
		Form		doc2("doc2", 1, 151);
		std::cout << doc2 << std::endl;	// not use
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl << std::endl;
	}
	}

	{
	Bureaucrat	boss("Joe", 1);			// can sign doc1/doc2
	Bureaucrat	employed("Tom", 70);	// cam sign doc2

	Form		doc1("doc1", 10, 6);
	Form		doc2("doc2", 150, 3);

	std::cout << doc1 << std::endl
		<< doc2 << std::endl;

	employed.signForm(doc1);			// Tom can't do that
	std::cout << doc1 << std::endl;

	boss.signForm(doc1);				// Joe can do that
	employed.signForm(doc2);			// Tom can do that

	std::cout << doc1 << std::endl
		<< doc2 << std::endl;
	}

}
