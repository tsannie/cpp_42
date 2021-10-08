/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 19:49:14 by tsannie           #+#    #+#             */
/*   Updated: 2021/09/30 11:25:30 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>
# include <algorithm>

# define YELLOW		"\033[0;33m"
# define BLUE		"\033[0;34m"

# define BRED		"\033[1;31m"
# define BGREEN		"\033[1;32m"
# define BYELLOW	"\033[1;33m"
# define BBLUE		"\033[1;34m"
# define BPURPLE	"\033[1;35m"
# define BCYAN		"\033[1;36m"
# define BWHITE		"\033[1;37m"
# define END		"\033[0m"

class Span
{

	public:

		class InvalidRange : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return (BRED "[ERROR] The range given"
						" is invalid." END);
				}
		};

		class InvalidNumber : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return (BRED "[ERROR] The number given as a constructor"
						" parameter is invalid." END);
				}
		};

		class ContainerFull : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return (BRED "[ERROR] The container is full." END);
				}
		};

		class ContainerNotFullEnough : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return (BRED "[ERROR] The container is not full"
						" enough." END);
				}
		};

		Span();
		Span(unsigned int N);
		Span( Span const & src );
		virtual ~Span();

		Span &		operator=( Span const & rhs );

		void			addNumbers(int a, int b);
		void			addNumber( int e );
		unsigned int	shortestSpan( void );
		unsigned int	longestSpan( void );

		std::vector<int>	getVector(void) const;

	private:

		std::vector<int>	*_vec;
		unsigned int 		_N;

};

std::ostream &			operator<<( std::ostream & o, Span const & i );

#endif /* ************************************************************ SPAN_H */
