/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 12:15:12 by tsannie           #+#    #+#             */
/*   Updated: 2021/09/23 09:35:37 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _a(0)
{
	return ;
}

Fixed::Fixed(Fixed const & cpy)
{
	*this = cpy;
}

Fixed::Fixed(int const val)
{
	this->_a = (val << this->_bits);
}

Fixed::Fixed(float const val)
{
	this->_a = roundf(val * (1 << this->_bits));
}

Fixed::~Fixed(void)
{
	return ;
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

Fixed &	Fixed::operator=(Fixed const & rhs)
{
	this->_a = rhs.getRawBits();
	return (*this);
}

// >, <, >=, <=, ==, !=

bool	Fixed::operator>(Fixed const & rhs) const
{
	return (this->_a > rhs.getRawBits());
}

bool	Fixed::operator<(Fixed const & rhs) const
{
	return (this->_a < rhs.getRawBits());
}

bool	Fixed::operator>=(Fixed const & rhs) const
{
	return (this->_a >= rhs.getRawBits());
}

bool	Fixed::operator<=(Fixed const & rhs) const
{
	return (this->_a <= rhs.getRawBits());
}

bool	Fixed::operator==(Fixed const & rhs) const
{
	return (this->_a == rhs.getRawBits());
}

bool	Fixed::operator!=(Fixed const & rhs) const
{
	return (this->_a != rhs.getRawBits());
}

// +, -, *, /

Fixed	Fixed::operator+(Fixed const & rhs) const
{
	Fixed	res;

	res.setRawBits(this->_a + rhs.getRawBits());
	return (res);
}

Fixed	Fixed::operator-(Fixed const & rhs) const
{
	Fixed	res;

	res.setRawBits(this->_a - rhs.getRawBits());
	return (res);
}

Fixed	Fixed::operator*(Fixed const & rhs) const
{
	Fixed	res;

	res.setRawBits(this->_a * (rhs.getRawBits() >> this->_bits));
	return (res);
}

Fixed	Fixed::operator/(Fixed const & rhs) const
{
	Fixed	res;

	res.setRawBits(this->_a / (rhs.getRawBits() >> this->_bits));
	return (res);
}

// a++, ++a, a--, --a

Fixed	Fixed::operator++(int)
{
	Fixed	res;

	res.setRawBits(this->_a);
	this->_a++;
	return (res);
}

Fixed &	Fixed::operator++()
{
	this->_a++;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	res;

	res.setRawBits(this->_a);
	this->_a--;
	return (res);
}

Fixed &	Fixed::operator--()
{
	this->_a--;
	return (*this);
}

// min max

Fixed &	Fixed::min(Fixed & a, Fixed & b)
{
	return (a < b ? a : b);
}

Fixed &	Fixed::max(Fixed & a, Fixed & b)
{
	return (a > b ? a : b);
}

const Fixed &	Fixed::min(const Fixed & a, const Fixed & b)
{
	return (a < b ? a : b);
}

const Fixed &	Fixed::max(const Fixed & a, const Fixed & b)
{
	return (a > b ? a : b);
}

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return (o);
}
