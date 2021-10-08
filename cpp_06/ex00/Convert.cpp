/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 13:12:06 by tsannie           #+#    #+#             */
/*   Updated: 2021/09/30 15:11:24 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Convert::Convert()
{
}

Convert::Convert( double value ): _double(value)
{
}

Convert::Convert( const Convert & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Convert::~Convert()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Convert &				Convert::operator=( Convert const & rhs )
{
	if ( this != &rhs )
	{
		this->_double = rhs._double;
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Convert::_checkDisplay(void) const
{
	if (this->_double < 32 || this->_double > 126)
		throw Display();
}


void	Convert::_checkImpossible(void) const
{
	if (std::isnan(this->_double) || std::isinf(this->_double)
		|| this->_double > static_cast<double>(2147483647)
		|| this->_double < static_cast<double>(-2147483648))
		throw Impossible();
}

void	Convert::_toChar(void) const
{
	char	c;

	try
	{
		_checkImpossible();
		_checkDisplay();
		c = static_cast<char>(this->_double);
		std::cout << "char: '" << c << "'" << std::endl;
	} catch (std::exception & e)
	{
		std::cout << "char: " << e.what() << std::endl;
	}
}

void	Convert::_toInt(void) const
{
	int nb;

	try
	{
		_checkImpossible();
		nb = static_cast<int>(this->_double);
		std::cout << "int: " << nb << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "int: " << e.what() << std::endl;
	}
}

void	Convert::_toFloat(void) const
{
	float				nb;
	int					i;
	std::ostringstream	ss;
	std::string			nbStr;

	nb = static_cast<float>(this->_double);
	ss << nb;
	nbStr = ss.str();

	std::cout << "float: ";
	if (std::isinf(nb) || std::isnan(nb))
	{
		if (nb > 0 && std::isinf(nb))
			std::cout << "+";
		std::cout << nb << "f" << std::endl;
		return ;
	}
	i = nbStr.find('.');
	if (i == -1)
	{
		std::cout << nb << ".0f" << std::endl;
		return ;
	}
	for (i = i + 1 ; nbStr[i] == '0' && nbStr[i] ; i++) {}
	if (!nbStr[i] || nbStr[i] == 'f')
	{
		std::cout << nb << ".0f" << std::endl;
		return ;
	}
	std::cout << nb << "f" << std::endl;
}

void	Convert::_toDouble(void) const
{
	int					i;
	std::ostringstream	ss;
	std::string			nbStr;

	ss << this->_double;
	nbStr = ss.str();

	std::cout << "double: ";
	if (std::isinf(this->_double) || std::isnan(this->_double))
	{
		if (this->_double > 0 && std::isinf(this->_double))
			std::cout << "+";
		std::cout << this->_double << std::endl;
		return ;
	}
	i = nbStr.find('.');
	if (i == -1)
	{
		std::cout << this->_double << ".0" << std::endl;
		return ;
	}
	for (i = i + 1 ; nbStr[i] == '0' && nbStr[i] ; i++) {}
	if (!nbStr[i] || nbStr[i] == 'f')
	{
		std::cout << this->_double << ".0" << std::endl;
		return ;
	}
	std::cout << this->_double << std::endl;
}

void	Convert::displayConvert(void)
{
	this->_toChar();
	this->_toInt();
	this->_toFloat();
	this->_toDouble();
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
