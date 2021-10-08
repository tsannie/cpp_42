/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 11:00:09 by tsannie           #+#    #+#             */
/*   Updated: 2021/09/21 12:47:24 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

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

class Data
{

	public:

		Data();
		Data( Data const & src );
		~Data();

		Data &		operator=( Data const & rhs );

		void		setTest( std::string test );
		std::string	getTest( void ) const;

	private:

		std::string	_test;

};

std::ostream &			operator<<( std::ostream & o, Data const & i );

#endif /* ************************************************************ DATA_H */
