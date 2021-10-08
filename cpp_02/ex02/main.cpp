/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 12:21:36 by tsannie           #+#    #+#             */
/*   Updated: 2021/09/23 09:33:07 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
	{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	
	std::cout << b << std::endl;
	
	std::cout << Fixed::max(a, b) << std::endl;
	std::cout << std::endl;
	}
	
	{
	Fixed a(10.10f);
	Fixed b(2);
	
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "a / b = " << a / b << std::endl;
	std::cout << "a * b = " << a * b << std::endl;
	std::cout << "a + b = " << a + b << std::endl;
	std::cout << "a - b = " << a - b << std::endl << std::endl;
	
	std::cout << "(a < b) = " << (a < b ? "true" : "false") << std::endl;
	std::cout << "(b < a) = " << (b < a ? "true" : "false") << std::endl;
	std::cout << "(a > b) = " << (a > b ? "true" : "false") << std::endl;
	std::cout << "(b > a) = " << (b > a ? "true" : "false") << std::endl;
	std::cout << "(a >= a) = " << (a >= a ? "true" : "false") << std::endl;
	std::cout << "(a >= b) = " << (a >= b ? "true" : "false") << std::endl;
	std::cout << "(a <= a) = " << (a <= a ? "true" : "false") << std::endl;
	std::cout << "(a <= b) = " << (a <= b ? "true" : "false") << std::endl;
	std::cout << "(a == b) = " << (a == b ? "true" : "false") << std::endl;
	std::cout << "(a == a) = " << (a == a ? "true" : "false") << std::endl;
	std::cout << "(a != b) = " << (a != b ? "true" : "false") << std::endl;
	std::cout << "(a != a) = " << (a != a ? "true" : "false") << std::endl;
	}
	return 0;
}
