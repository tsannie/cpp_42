/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 11:01:58 by tsannie           #+#    #+#             */
/*   Updated: 2021/09/28 10:26:28 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{


	{
	std::cout << YELLOW "Test 1 \'RobotomyRequestForm\' :" END << std::endl;
	RobotomyRequestForm	robot("R2D2");
	Bureaucrat	employed("Pol", 45);	// can sign|execute
	Bureaucrat	visitor("Ugo", 72);		// can sign

	visitor.signForm(robot);
	employed.executeForm(robot);
	std::cout << std::endl;
	}

	{
	std::cout << YELLOW "Test 2 \'ShrubberyCreationForm\' :" END << std::endl;
	ShrubberyCreationForm	tree("apple");
	Bureaucrat	employed("Pol", 137);	// can sign|execute
	Bureaucrat	visitor("Ugo", 145);	// can sign

	visitor.signForm(tree);
	employed.executeForm(tree);
	std::cout << std::endl;
	}

	{
	std::cout << YELLOW "Test 3 \'PresidentialPardonForm\' :" END << std::endl;
	PresidentialPardonForm	sorry("Arthur Dent");
	Bureaucrat	employed("Pol", 5);		// can sign|execute
	Bureaucrat	visitor("Ugo", 25);		// can sign

	visitor.signForm(sorry);
	employed.executeForm(sorry);
	std::cout << std::endl;
	}

	{
	std::cout << YELLOW "Test doc not sign :" END << std::endl;
	RobotomyRequestForm	robot("R2D2");
	Bureaucrat	employed("Pol", 45);		// can sign|execute
	//Bureaucrat	visitor("Ugo", 72);		// can sign

	//visitor.signForm(robot);
	employed.executeForm(robot);
	std::cout << std::endl;
	}

	{
	std::cout << YELLOW "Test no grade for exec :" END << std::endl;
	RobotomyRequestForm	robot("R2D2");
	//Bureaucrat	employed("Pol", 45);	// can sign|execute
	Bureaucrat	visitor("Ugo", 72);			// can sign

	visitor.signForm(robot);
	visitor.executeForm(robot); 			// Ugo don't have the good grade for that
	std::cout << std::endl;
	}
}
