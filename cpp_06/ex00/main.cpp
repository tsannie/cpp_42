/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 15:07:03 by tsannie           #+#    #+#             */
/*   Updated: 2021/09/27 14:47:11 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int		checkExep(std::string arg)
{
	std::string	exep[] = {"-inff", "+inff", "inff",
						"-inf", "+inf", "inf",
						"nan", "nanf"};
	int			len = sizeof(exep) / sizeof(std::string);
	int			i;

	for (i = 0 ; i < len ; i++)
	{
		if (arg == exep[i])
			return (1);
	}
	return (0);
}

int		checkNb(std::string arg)
{
	int	i;
	int	sign = 0;
	int	f = 0;
	int dot = 0;

	for (i = 0 ; arg[i] ; i++)
	{
		if (arg[i] == '+' || arg[i] == '-')
		{
			if (i != 0)
				return (0);
			sign++;
		}
		else if (arg[i] == '.')
			dot++;
		else if (arg[i] == 'f')
		{
			if (arg[i + 1])
				return (0);
			f++;
		}
		else if (arg[i] < '0' || arg[i] > '9')
			return (0);
	}
	if (dot > 1 || f > 1 || sign > 1)
		return (0);
	return (1);
}

void	checkArg(std::string arg)
{
	if (checkExep(arg) == 1)	// is a "nan inf inff [...]"
		return ;
	if (arg.length() == 1)		// is a char
		return ;
	if (checkNb(arg) == 1)		// is a float / double
		return ;
	std::cout << "[ERROR] Argument is invalid." << std::endl;
	exit(1);
}

int	main(int ac, char **av)
{
	std::string	value;
	Convert		conv;

	if (ac == 2)
	{
		value = std::string(av[1]);
		checkArg(value);
		try
		{
			conv = Convert(std::stod(value));
			conv.displayConvert();
		}
		catch(...)
		{
			value = (value[0] == '-') ? "-inff" : "+inff";
			conv = Convert(std::stod(value));
			conv.displayConvert();
		}
	}
	else
		std::cout << "[ERROR] Not the right number of arguments." << std::endl;
	return (0);
}
