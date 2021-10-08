/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 15:08:16 by tsannie           #+#    #+#             */
/*   Updated: 2021/09/30 23:35:43 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main( void )
{
	{
	std::cout << YELLOW "Test 1 (Acces to index out of range) :" END << std::endl;
	try
	{
		Array<int> err1(5);
		std::cout << err1[5] << std::endl;	// crash
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Array<double> err2(20);
		std::cout << err2[-1] << std::endl;	// crash
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	}

	{
		unsigned int i;
		std::cout << YELLOW "Test 2 (acces and edit with \'[]\') :" END << std::endl;

		Array<unsigned int> op(5);
		for (i = 0 ; i < op.size() ; i++)
			op[i] = i * 10;
		std::cout << BWHITE "op[0] = " BCYAN << op[0] << END << std::endl;
		std::cout << BWHITE "op[1] = " BCYAN << op[1] << END << std::endl;
		std::cout << BWHITE "op[2] = " BCYAN << op[2] << END << std::endl;
		std::cout << BWHITE "op[3] = " BCYAN << op[3] << END << std::endl;
		std::cout << BWHITE "op[4] = " BCYAN << op[4] << END << std::endl;
		std::cout << std::endl;
	}

	{
		unsigned int	i;
		std::cout << YELLOW "Test 3 (Test init and cpy) :" END << std::endl;

		Array<int> arr1(10);
		for (i = 0 ; i < arr1.size() ; i++)
			arr1[i] = i * 10;
		std::cout << BWHITE "arr1 = " BCYAN << arr1 << END << std::endl;

		Array<int> arr2;
		std::cout << BWHITE "arr2 = " BCYAN << arr2 << END << std::endl;

		std::cout << BGREEN "[cpy arr2 = arr1]" END << std::endl;
		arr2 = arr1;
		std::cout << BWHITE "arr2 = " BCYAN << arr2 << END << std::endl;
	}
}
