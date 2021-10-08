/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 19:48:41 by tsannie           #+#    #+#             */
/*   Updated: 2021/09/30 12:46:49 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span()
{
	throw InvalidNumber();
}

Span::Span(unsigned int N): _N(N)
{
	if (this->_N == 0)
		throw InvalidNumber();
	else
		this->_vec = new std::vector<int>[this->_N];
}

Span::Span( const Span & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span()
{
	if (this->_vec)
		delete [] this->_vec;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Span &				Span::operator=( Span const & rhs )
{
	if ( this != &rhs )
	{
		this->_N = rhs._N;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Span const & i )
{
	std::vector<int>:: iterator	e;
	std::vector<int>			vec;

	vec = i.getVector();
	o << "[";
	for ( e = vec.begin() ; e != vec.end() ; e++)
	{
		o << *e;
		if (e + 1 != vec.end())
			o << ", ";
	}
	o << "]";
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void			Span::addNumber(int e)
{
	if (this->_vec->size() == this->_N)
		throw ContainerFull();
	this->_vec->push_back(e);
}

void			Span::addNumbers(int begin, int end)
{
	int	i;

	if (begin > end)
		throw InvalidRange();
	for (i = begin ; i <= end ; i++)
	{
		if (this->_vec->size() == this->_N)
			throw ContainerFull();
		this->_vec->push_back(i);
	}
}

unsigned int	Span::shortestSpan( void )
{
	std::vector<int>			vecSort;
	std::vector<int>:: iterator	i;
	long						conv;

	if (this->_vec->size() <= 1)
		throw ContainerNotFullEnough();
	conv = 4294967295;
	vecSort = *this->_vec;
	std::sort(vecSort.begin(), vecSort.end());
	for ( i = vecSort.begin() + 1 ; i != vecSort.end() ; i++)
	{
		if (conv > static_cast<long>(*i) - static_cast<long>(*(i - 1)))
			conv = static_cast<long>(*i) - static_cast<long>(*(i - 1));
	}

	return (static_cast<unsigned int>(conv));
}

unsigned int	Span::longestSpan( void )
{
	std::vector<int>::iterator	max;
	std::vector<int>::iterator	min;
	long						conv;

	if (this->_vec->size() <= 1)
		throw ContainerNotFullEnough();
	max = std::max_element(this->_vec->begin(), this->_vec->end());
	min = std::min_element(this->_vec->begin(), this->_vec->end());
	conv = static_cast<long>(*max) - static_cast<long>(*min);

	return (static_cast<unsigned int>(conv));
}



/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::vector<int>	Span::getVector(void) const
{
	return (*this->_vec);
}


/* ************************************************************************** */
