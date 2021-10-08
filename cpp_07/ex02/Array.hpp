/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 16:28:55 by tsannie           #+#    #+#             */
/*   Updated: 2021/09/22 22:56:47 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>

# define YELLOW		"\033[0;33m"

# define BBLACK		"\033[1;30m"
# define BRED		"\033[1;31m"
# define BGREEN		"\033[1;32m"
# define BYELLOW	"\033[1;33m"
# define BBLUE		"\033[1;34m"
# define BPURPLE	"\033[1;35m"
# define BCYAN		"\033[1;36m"
# define BWHITE		"\033[1;37m"
# define END		"\033[0m"

template<typename T>
class Array
{

	public:

		class IndexOutOfRange : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{ 
					return BRED "[ERROR] Acces to this index"
						" not possible." END; 
				}
		};
		Array(): _n(0), _array(NULL) {}
		Array(unsigned int n): _n(n), _array(new T[n])
		{
			unsigned int i;

			for (i = 0 ; i < n ; i++)
				this->_array[i] = 0;
		}
		Array( Array const & src ): _n(0), _array(NULL)
		{
			*this = src;
		}
		~Array()
		{
			if (this->_array)
				delete [] this->_array;
		}

		Array &		operator=( Array const & rhs )
		{
			unsigned int i;

			if ( this != &rhs )
			{
				if (this->_array)
					delete [] this->_array;
				this->_n = rhs._n;

				this->_array = new T[this->_n];
				for (i = 0 ; i < this->_n ; i++)
					this->_array[i] = rhs._array[i];
			}
			return *this;
		}
		
		T &			operator[](unsigned int idx)
		{
			if (idx > (this->_n - 1) || idx < 0)
				throw IndexOutOfRange();
			return this->_array[idx];
		}

		unsigned int	size( void ) const { return this->_n; }

	private:

		unsigned int	_n;
		T				*_array;

};

template<typename T>
std::ostream &			operator<<( std::ostream & o, Array<T> & cl )
{
	unsigned int	i;
	
	o << "[ ";
	if (cl.size() == 0)
		o << "null";
	else
	{
		for (i = 0 ; i < cl.size() ; i++)
		{
			o << cl[i];
			if (i != (cl.size() - 1))
				o << ", ";
		}
	}
	o << " ]";
	return o;
}

#endif /* *********************************************************** ARRAY_H */