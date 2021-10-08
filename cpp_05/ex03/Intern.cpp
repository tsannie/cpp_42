/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 09:29:13 by tsannie           #+#    #+#             */
/*   Updated: 2021/09/15 09:30:01 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{
}

Intern::Intern( const Intern & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Intern &				Intern::operator=( Intern const & rhs )
{
	(void)(rhs);
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

Form	*Intern::_createShrubbery(std::string const & target)
	{ return new ShrubberyCreationForm(target); }

Form	*Intern::_createRobotomy(std::string const & target)
	{ return new RobotomyRequestForm(target); }

Form	*Intern::_createPresidential(std::string const & target)
	{ return new PresidentialPardonForm(target); }

typedef Form* (Intern::*functionOutput)(std::string const &);

Form	*Intern::makeForm(std::string const & name, std::string const & target)
{
	int			i;
	int			len;
	std::string	containerStock[] = {"shrubbery creation",
		"robotomy request", "presidential pardon"};
	functionOutput output[] = {&Intern::_createShrubbery,
		&Intern::_createRobotomy, &Intern::_createPresidential};

	len = sizeof(containerStock) / sizeof(std::string);
	for (i = 0 ; i < len ; i++)
	{
		if (name == containerStock[i])
		{
			std::cout << BGREEN "Intern creates " BBLUE
				<< name << END << std::endl;
			return (this->*output[i])(target);
		}
	}
	std::cout << BRED "Intern does not know " BBLUE << name
		<< BRED ". All incapable these interns !" END << std::endl;
	return (NULL);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
