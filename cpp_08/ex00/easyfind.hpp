/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 17:32:13 by tsannie           #+#    #+#             */
/*   Updated: 2021/10/01 11:34:37 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <string>
# include <algorithm>
# include <list>
# include <vector>
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

class NotFound : public std::exception
{
	public:
		virtual const char* what() const throw()
		{
			return (BRED "Not found" END);
		}
};

template<typename T>
int		easyfind(T & cont, int n)
{
	typename T::iterator	ret;

	ret = std::find(cont.begin(), cont.end(), n);
	if (ret == cont.end())
		throw NotFound();
	return (*ret);
}

#endif
