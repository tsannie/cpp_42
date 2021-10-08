/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 13:14:31 by tsannie           #+#    #+#             */
/*   Updated: 2021/09/30 15:32:00 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BaseABC.hpp"

Base *generate( void )
{
	Base	*ret;

	switch (rand() % 3 + 1)
	{
	case (1):
		std::cout << BGREEN "[A] has been choose." END;
		ret = new A();
		break;
	case (2):
		std::cout << BGREEN "[B] has been choose." END;
		ret = new B();
		break;
	case (3):
		std::cout << BGREEN "[C] has been choose." END;
		ret = new C();
		break;
	}
	std::cout << std::endl;

	return (ret);
}

void identify( Base *p )
{
	A*	a = dynamic_cast<A*>(p);
	B*	b = dynamic_cast<B*>(p);
	C*	c = dynamic_cast<C*>(p);

	std::cout << BWHITE "[identify( " BYELLOW
		"Base* p" BWHITE " )] = \"" BBLUE;

	if (a)
		std::cout << "A";
	else if (b)
		std::cout << "B";
	else if (c)
		std::cout << "C";

	std::cout << BWHITE "\"." END << std::endl;
}

void identify( Base &p )
{
	std::cout << BWHITE "[identify( " BYELLOW
		"Base& p" BWHITE " )] = \"" BBLUE;

	try
	{
		A&	a = dynamic_cast<A&>(p);	// convertion pointer = risk of crash
		static_cast<void>(a);
		std::cout << "A";
	}
	catch(...)
	{
		try
		{
			B&	b = dynamic_cast<B&>(p);
			static_cast<void>(b);
			std::cout << "B";
		}
		catch(...)
		{
			std::cout << "C";
		}
	}
	std::cout << BWHITE "\"." END << std::endl;
}

int	main( void )
{
	srand (time(NULL));
	Base*	letter;

	letter = generate();
	identify(letter);
	identify(*letter);

	delete letter;
	return (0);
}
