/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 09:48:53 by tsannie           #+#    #+#             */
/*   Updated: 2021/09/14 14:25:46 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat() : _name("Moldu"), _grade(MIN_GRADE)
{
}

Bureaucrat::Bureaucrat(std::string const & name, int grade): _name(name), _grade(grade)
{
	if (grade < MAX_GRADE)
		throw GradeTooHighException();
	else if (grade > MIN_GRADE)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat( const Bureaucrat & src ): _name(src._name)
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat &				 Bureaucrat::operator=( Bureaucrat const & rhs )
{
	if ( this != &rhs )
	{
		this->_grade = rhs.getGrade();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i )
{
	o << BBLUE << i.getName() << BWHITE ", bureaucrat grade " BBLUE
		<< i.getGrade() << BWHITE "." END;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void		Bureaucrat::signForm(Form & form)
{
	try
	{
		form.beSigned(*this);
		std::cout << BBLUE << this->getName() << BWHITE " signs "
			<< BCYAN << form.getName() << BWHITE "." END << std::endl;
	}
	catch(std::exception const & e)
	{
		std::cout << BBLUE << this->getName()
			<< BWHITE " can't sign:\"" << e.what()
			<< BWHITE "\"" END << std::endl;
	}
}

void		Bureaucrat::incrGrad()
{
	if (this->_grade == MAX_GRADE)
		throw GradeTooHighException();
	else
		this->_grade--;
}

void		Bureaucrat::decrGrad()
{
	if (this->_grade == MIN_GRADE)
		throw GradeTooLowException();
	else
		this->_grade++;
}

char const *Bureaucrat::GradeTooHighException::what() const throw()
{
	return BRED "[Error] Grade is to high !" END;
}

char const *Bureaucrat::GradeTooLowException::what() const throw()
{
	return BRED "[Error] Grade is to low !" END;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	Bureaucrat::getName() const { return this->_name; }

int			Bureaucrat::getGrade() const { return this->_grade; }


/* ************************************************************************** */
