/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 15:08:16 by tsannie           #+#    #+#             */
/*   Updated: 2021/09/30 23:17:11 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>
void printArray(T & elem)
{
	std::cout << elem;
}

int main( void )
{
	int a[] = { 0, 1, 2, 3, 4, 5, 6 };
	char b[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g' };
	std::string c[] = { "zero", " one", " two", " three",
					" four", " five", " six" };

	std::cout << YELLOW "Test 1 (int) :" END << std::endl;
	iter(a, 7, printArray);
	std::cout << "\n------------------------" << std::endl
		<< YELLOW "Test 2 (char) :" END << std::endl;
	iter(b, 7, printArray);
	std::cout << "\n------------------------" << std::endl
		<< YELLOW "Test 3 (std::string) :" END << std::endl;
	iter(c, 7, printArray);
	std::cout << std::endl;

	return 0;
}
