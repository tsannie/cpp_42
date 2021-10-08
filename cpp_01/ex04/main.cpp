/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 10:31:18 by tsannie           #+#    #+#             */
/*   Updated: 2021/09/01 13:25:30 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

bool	all_condition(int ac, char **av, bool openFile)
{
	if (ac != 4)
		return (false);
	else if (!av[2][0] || !av[3][0])
	{
		std::cout << "S1 or S2 is empty. Please try with non-empty args." << std::endl;
		return (false);
	}
	else if (openFile == false)
	{
		std::cout << "The file does not exist." << std::endl;
		return (false);
	}
	return(true);
}

void	replace(std::ifstream & file, std::string nameFile,
			std::string key, std::string replaceTo)
{
	std::string	line;
	std::ofstream out;
	std::string complete = nameFile + ".replace";

	out.open(complete.c_str(), std::ofstream::out | std::ofstream::trunc);
	while (std::getline(file, line))
	{
		if (line.find(key) == std::string::npos)
			out << line << std::endl;
		else
		{
			while (line.find(key) != std::string::npos)
			{
				while (line.find(key) != 0)
				{
					out << line[0];
					line.erase(0, 1);
				}
				out << replaceTo;
				line.erase(0, key.length());
			}
			out << line << std::endl;
		}
	}
	out.close();
}

int	main(int ac, char **av)
{
	std::ifstream	file;
	bool			open;

	if (ac == 4)
		file.open(av[1]);
	open = file.is_open();
	if (all_condition(ac, av, open))
		replace(file, av[1], av[2], av[3]);
	else
		std::cout << "Error\nExample of use : "
			"\"./replace test.txt hello hey\"" << std::endl;
	if (open)
		file.close();
	return (0);
}
