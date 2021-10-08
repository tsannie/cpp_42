/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 13:32:14 by tsannie           #+#    #+#             */
/*   Updated: 2021/09/14 12:51:37 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form(): _name("Moldu"), _sign(false),
	_grad_sign(MIN_GRADE), _grad_exec(MIN_GRADE)
{
}

Form::Form( std::string const & name, int const grad_sign, int const grad_exec ):
	_name(name), _sign(false), _grad_sign(grad_sign), _grad_exec(grad_exec)
{
	if ( grad_sign < MAX_GRADE || grad_exec < MAX_GRADE )
		throw GradeTooHighException();
	else if ( grad_sign > MIN_GRADE || grad_exec > MIN_GRADE )
		throw GradeTooLowException();
}

Form::Form( const Form & src ): _name(src._name),
	_grad_sign(src._grad_sign), _grad_exec(src._grad_exec)
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form &				Form::operator=( Form const & rhs )
{
	if ( this != &rhs )
	{
		this->_sign = rhs.getSign();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Form const & i )
{
	o << BYELLOW "Name of form  : " BCYAN << i.getName() << std::endl;
	o << BYELLOW "Signed        : " BCYAN << ((i.getSign()) ? "true" : "false") << std::endl;
	o << BYELLOW "Grad for sign : " BCYAN << i.getGradSign() << std::endl;
	o << BYELLOW "Grad for exec : " BCYAN << i.getGradExec() << END << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Form::canExecute( Bureaucrat const & executor ) const
{
	if ( this->_sign == false )
		throw FormNotSignException();
	else if ( executor.getGrade() > this->getGradExec())
		throw GradeTooLowException();
}

void	Form::beSigned(Bureaucrat const & src)
{
	if ( src.getGrade() <= this->getGradSign() )
		this->_sign = true;
	else
		throw GradeTooLowException();
}

char const *Form::GradeTooHighException::what() const throw()
{
	return BRED "[Error] Grade for this form is to high !" END;
}

char const *Form::GradeTooLowException::what() const throw()
{
	return BRED "[Error] Grade for this form is to low !" END;
}

char const *Form::FormNotSignException::what() const throw()
{
	return BRED "[Error] Form is not sign !" END;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	Form::getName() const { return this->_name; }

bool		Form::getSign() const { return this->_sign; }

int			Form::getGradSign() const { return this->_grad_sign; }

int			Form::getGradExec() const { return this->_grad_exec; }


/* ************************************************************************** */
