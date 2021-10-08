/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 17:26:13 by tsannie           #+#    #+#             */
/*   Updated: 2021/06/25 01:05:12 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void		line_tab(void)
{
	int	i;

	for (i = 0 ; i < 40 ; i++)
	{
		if (!(i % 10))
			std::cout << '+';
		std::cout << '-';
	}
	std::cout << '+';
	std::cout << std::endl;
}

std::string	allign(std::string str)
{
	if (str.size() > 10)
	{
		str.resize(10);
		str[9] = '.';
	}
	return (str);
}

void		display_summary(Contact *phonebook, int stock)
{
	int i;

	for (i = 0 ; i < stock ; i++)
	{
		std::cout << '|' << std::setw(10) << phonebook[i].getIndex();
		std::cout << '|' << std::setw(10) << allign(phonebook[i].getFirstname());
		std::cout << '|' << std::setw(10) << allign(phonebook[i].getLastname());
		std::cout << '|' << std::setw(10) << allign(phonebook[i].getLogin())
		<< '|' << std::endl;
	}
}

void		display_tab(Contact *phonebook, int stock)
{
	std::string index;
	int			choose;

	if (stock == 0)
		std::cout << "The directory is empty." << std::endl;
	else
	{
		line_tab();
		std::cout << "|     INDEX|";
		std::cout << " FIRSTNAME|";
		std::cout << "  LASTNAME|";
		std::cout << "     LOGIN|" << std::endl;
		line_tab();
		display_summary(phonebook, stock);
		line_tab();
		choose = -1;
		while (choose == -1)
		{
			std::cout << "Select a contact with index between (1-" << stock << ") : ";
			std::getline(std::cin, index);
			if (std::isdigit(index[0]) && index[1] == '\0')
				choose = index[0] - 48;
			if (choose < 1 || choose > stock)
				choose = - 1;
		}
		phonebook[choose - 1].getFullcontact();
	}
}

int			main(void)
{
	std::string	cmd;
	int			stock;
	Contact		phonebook[8];

	stock = 0;
	while (1)
	{
		std::cout << "$> ";
		std::getline(std::cin, cmd);
		if (cmd == "EXIT")
			break;
		else if (cmd == "ADD")
		{
			if (stock < 8)
			{
				phonebook[stock].setContact(stock);
				stock++;
			}
			else
				std::cout << "The directory is filled." << std::endl;
		}
		else if (cmd == "SEARCH")
			display_tab(phonebook, stock);
		else if (cmd != "")
			std::cout << cmd << ": not found. Use 'ADD' 'SEARCH' or 'EXIT' " << std::endl;
	}
	std::cout << "See you soon ..." << std::endl;
	return (0);
}

