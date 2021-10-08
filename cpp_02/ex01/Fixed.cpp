/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 12:15:12 by tsannie           #+#    #+#             */
/*   Updated: 2021/05/31 17:08:37 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _a(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & cpy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = cpy;
}

Fixed::Fixed(int const val)
{
	std::cout << "Int constructor called" << std::endl;
	this->_a = (val << this->_bits);
}

Fixed::Fixed(float const val)
{
	std::cout << "Float constructor called" << std::endl;
	this->_a = roundf(val * (1 << this->_bits));
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed &	Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_a = rhs.getRawBits();
	return (*this);
}

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return (o);
}

int Fixed::getRawBits(void) const
{
	return (this->_a);
}

void Fixed::setRawBits(int const raw)
{
	this->_a = raw;
}

int Fixed::toInt(void) const
{
	return (this->_a >> this->_bits);
}

float Fixed::toFloat(void) const
{
	return ((float)this->_a / (float)(1 << this->_bits));
}
