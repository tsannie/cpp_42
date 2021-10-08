/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 19:59:37 by tsannie           #+#    #+#             */
/*   Updated: 2021/09/23 10:08:47 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

bool	bsp( Point const a, Point const b, Point const c, 
Point const point );

int	main(void)
{
	{
	Point a = Point(Fixed(0), Fixed(0));
	Point b = Point(Fixed(3), Fixed(4));
	Point c = Point(Fixed(6), Fixed(0));
	Point point = Point(Fixed(1), Fixed(1));


	std:: cout << (bsp(a, b, c, point) ? "Point is in." 
									: "Point is out.") << std::endl;
	}

	{
	Point a = Point(Fixed(0), Fixed(0));
	Point b = Point(Fixed(3), Fixed(4));
	Point c = Point(Fixed(6), Fixed(0));
	Point point = Point(Fixed(1), Fixed(2));


	std:: cout << (bsp(a, b, c, point) ? "Point is in." 
									: "Point is out.") << std::endl;
	}
}