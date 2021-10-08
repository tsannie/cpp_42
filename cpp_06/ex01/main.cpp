/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 11:00:51 by tsannie           #+#    #+#             */
/*   Updated: 2021/09/30 15:18:55 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t serialize(Data* ptr)
{
	std::cout << BGREEN "[serialize] has been called" END << std::endl;
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	std::cout << BGREEN "[deserialize] has been called" END << std::endl;
	return (reinterpret_cast<Data*>(raw));
}

int	main(void)
{
	Data			stock;
	Data			*pointer;

	stock.setTest("Hey i'm just a simple test.");
	std::cout << BWHITE "stock   = \"" << stock
		<< BWHITE "\"" END << std::endl;

	pointer = deserialize(serialize(&stock));

	std::cout << BWHITE "pointer = \"" BBLUE << pointer->getTest()
		<< BWHITE "\"" END << std::endl;
	std::cout << std::endl;

	std::cout << BWHITE "Adress stock   = \"" BBLUE << &stock
		<< BWHITE "\"" << std::endl
		<< "Adress pointer = \"" BBLUE << pointer
		<< BWHITE "\"" END << std::endl;
	return (0);
}
