/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 11:01:58 by tsannie           #+#    #+#             */
/*   Updated: 2021/09/28 10:45:02 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"

int	main(void)
{
	int	i;
	Intern someRandomIntern;
	Form* form;
	std::string	containerStock[] = {"shrubbery creation",
		"robotomy request", "presidential pardon"};
	int len = sizeof(containerStock) / sizeof(std::string);
	Bureaucrat	boss("Madoff", 1);		// can sign|execute

	for (i = 0 ; i < len ; i++)
	{
		form = someRandomIntern.makeForm(containerStock[i], "Blender");
		boss.signForm(*form);
		boss.executeForm(*form);
		delete form;
		std::cout << std::endl;
	}
	form = someRandomIntern.makeForm("Unknown", "Blender");
}
