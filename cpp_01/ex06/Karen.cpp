/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 11:43:37 by tsannie           #+#    #+#             */
/*   Updated: 2021/09/01 11:51:50 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

void Karen::debug(void)
{
	std::cout << BCYAN"[ DEBUG ]\nI love to get extra bacon for my "
	"7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!\n"
	END << std::endl;
}

void Karen::info(void)
{
	std::cout << BGREEN"[ INFO ]\nI cannot believe adding extra bacon cost more money."
	"You don’t put enough! If you did I would not have to ask for it!\n"
	END << std::endl;
}

void Karen::warning(void)
{
	std::cout << BYELLOW"[ WARNING ]\nI think I deserve to have some extra bacon for free. I’ve"
	" been coming here for years and you just started working here last month.\n"
	END << std::endl;
}

void Karen::error(void)
{
	std::cout << BRED"[ ERROR ]\nThis is unacceptable, I want to speak to the manager now.\n"
	END << std::endl;
}

void Karen::complain(std::string level)
{
	int	len;
	int i;
	std::string containerStock[]= {"DEBUG", "INFO", "WARNING", "ERROR"};

	len = sizeof(containerStock) / sizeof(std::string);
	for (i = 0 ; (i < len) && (level != containerStock[i]) ; i++) {}
	switch (i + 1)
	{
		case 1:
			debug();
		case 2:
			info();
		case 3:
			warning();
		case 4:
			error();
			break;
		default:
			std::cout << BPURPLE"[ Probably complaining about insignificant problems ]\n"
			END << std::endl;
			break;
	}
}
