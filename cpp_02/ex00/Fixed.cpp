/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 12:15:12 by tsannie           #+#    #+#             */
/*   Updated: 2021/05/31 15:22:48 by tsannie          ###   ########.fr       */
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

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_a);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_a = raw;
}
