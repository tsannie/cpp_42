/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 11:43:37 by tsannie           #+#    #+#             */
/*   Updated: 2021/09/01 11:41:12 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

void Karen::debug(void)
{
	std::cout << BCYAN << "I love to get extra bacon for my "
	"7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!"
	<< END << std::endl;
}

void Karen::info(void)
{
	std::cout << BGREEN <<  "I cannot believe adding extra bacon cost more money."
	"You don’t put enough! If you did I would not have to ask for it!"
	<< END << std::endl;
}

void Karen::warning(void)
{
	std::cout << BYELLOW << "I think I deserve to have some extra bacon for free. I’ve"
	" been coming here for years and you just started working here last month."
	<< END << std::endl;
}

void Karen::error(void)
{
	std::cout << BRED << "This is unacceptable, I want to speak to the manager now."
	<< END << std::endl;
}

typedef void (Karen::*functionOutput)(void);

void Karen::complain(std::string level)
{
	int i;
	int len;
	std::string log;
	std::string containerStock[]= {"DEBUG", "INFO", "WARNING", "ERROR"};
	functionOutput output[] = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};

	len = sizeof(containerStock) / sizeof(std::string);
	for (i = 0 ; i < len ; i++)
	{
		if (level == containerStock[i])
			(this->*output[i])();
	}
}
