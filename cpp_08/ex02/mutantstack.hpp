/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 13:29:25 by tsannie           #+#    #+#             */
/*   Updated: 2021/10/01 12:05:35 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <stack>
# include <deque>

# define YELLOW		"\033[0;33m"
# define BRED		"\033[1;31m"
# define BGREEN		"\033[1;32m"
# define BYELLOW	"\033[1;33m"
# define BBLUE		"\033[1;34m"
# define BPURPLE	"\033[1;35m"
# define BCYAN		"\033[1;36m"
# define BWHITE		"\033[1;37m"
# define END		"\033[0m"

template <typename T>
class MutantStack: public std::stack<T>
{

	public:

		typedef typename std::deque<T>::const_iterator iterator;

		MutantStack(): std::stack<T>() {};
		MutantStack( MutantStack const & src ): std::stack<T>(src) {};
		virtual ~MutantStack() {};

		MutantStack &		operator=( MutantStack const & rhs )
		{
			if ( this != &rhs )
				this->c = rhs.c.copy();
			return *this;
		}

		iterator	begin(void) { return this->c.begin(); }
		iterator	end(void) { return this->c.end(); }

	private:

};


#endif /* ***************************************************** MUTANTSTACK_H */
