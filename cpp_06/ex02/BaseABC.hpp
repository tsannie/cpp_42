/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BaseABC.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 11:00:09 by tsannie           #+#    #+#             */
/*   Updated: 2021/09/21 15:11:42 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASEABC_HPP
# define BASEABC_HPP

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

class Base
{
	public:
		virtual ~Base() {};
};

class A: public Base {};
class B: public Base {};
class C: public Base {};


#endif /* ************************************************************ BASEABC_H */
