/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 16:24:41 by user42            #+#    #+#             */
/*   Updated: 2021/07/27 12:17:27 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

# define BCYAN		"\033[1;36m"
# define BGREEN		"\033[1;32m"
# define BPURPLE	"\033[1;35m"
# define END		"\033[0m"

int		main(void)
{
	std::string	hi = "HI THIS IS BRAIN";
	std::string	*stringPTR = &hi;
	std::string	&stringREF = hi;
	
	std::cout << BCYAN "string    address : " END << &hi << std::endl;
	std::cout << BGREEN "stringPTR address : " END << stringPTR << std::endl;
	std::cout << BPURPLE "stringREF address : " END << &stringREF << std::endl;
	
	std::cout << BCYAN "\nstring    value : " END << hi << std::endl;
	std::cout << BGREEN "stringPTR value : " END << *stringPTR << std::endl;
	std::cout << BPURPLE "stringREF value : " END << stringREF << std::endl;
}