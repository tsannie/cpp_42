/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 11:43:41 by tsannie           #+#    #+#             */
/*   Updated: 2021/07/26 18:40:26 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>
# include <string>

# define BRED		"\033[1;31m"
# define BYELLOW	"\033[1;33m"
# define BCYAN		"\033[1;36m"
# define BGREEN		"\033[1;32m"
# define BPURPLE	"\033[1;35m"
# define END		"\033[0m"

class Karen
{
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);

	public:
		void complain(std::string level);

};

#endif
