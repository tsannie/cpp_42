/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 10:19:27 by tsannie           #+#    #+#             */
/*   Updated: 2021/09/27 15:24:51 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm():
	Form("Robotomy", 72, 45), _target("Imotep")
{
}

RobotomyRequestForm::RobotomyRequestForm( std::string const & target ):
	Form("Robotomy", 72, 45), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src ):
	Form(src.getName(), 72, 45)
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RobotomyRequestForm &				RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
	if ( this != &rhs )
	{
		this->_target = rhs._target;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, RobotomyRequestForm const & i )
{
	o << BYELLOW "Target = " BCYAN << i.getTarget() << END;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	canExecute(executor);
	std::cout << BYELLOW "Tching Blang Bim TCHOUNNK ..." END << std::endl;
	srand(time(NULL));
	if ((rand() % 2 + 1) == 1)
	{
		std::cout << BBLUE << this->_target << BGREEN " has been robotized !" END
			<< std::endl;
	}
	else
	{
		std::cout << BBLUE << this->_target << BRED " has not been robotized !" END
			<< std::endl;
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	RobotomyRequestForm::getTarget() const { return this->_target; }


/* ************************************************************************** */
