/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 13:22:07 by tsannie           #+#    #+#             */
/*   Updated: 2021/10/01 12:26:28 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include <list>

int main()
{
	MutantStack<int> mstack;

	std::cout << YELLOW "Test 1 (use stack):" << END << std::endl;
	std::cout << std::endl;

	std::cout << BBLUE "push [5, 17, 3, 5, 151, 15, 141, 737, 12]"
		<< END << std::endl;
	mstack.push(5);
	mstack.push(17);
	mstack.push(3);
	mstack.push(5);
	mstack.push(151);
	mstack.push(15);
	mstack.push(141);
	mstack.push(737);
	mstack.push(12);

	std::cout << BCYAN << "stack.top = " BWHITE << mstack.top()
		<< END << std::endl;
	std::cout << BCYAN << "stack.size = " BWHITE << mstack.size()
		<< END << std::endl;

	std::cout << BBLUE << "stack.pop()" << END << std::endl;
	mstack.pop();
	std::cout << BBLUE << "stack.pop()" << END << std::endl;
	mstack.pop();

	std::cout << BCYAN << "stack.top = " BWHITE << mstack.top()
		<< END << std::endl;
	std::cout << BCYAN << "stack.size = " BWHITE << mstack.size()
		<< END << std::endl;
	std::cout << std::endl;

	std::cout << YELLOW "Test 2 (iterator):" << END << std::endl;
	std::cout << std::endl;

	MutantStack<int>::iterator it;
	MutantStack<int>::iterator ite;

	it = mstack.begin();
	ite = mstack.end();

	std::cout << BBLUE "stack = [";
	while (it != ite)
	{
		std::cout << *it;
		++it;
		if (it != ite)
			std::cout << ", ";
	}
	std::cout << "]" END << std::endl;
	std::cout << std::endl;

	std::cout << YELLOW "Test 3 (cpy to real stack):" << END << std::endl;
	std::cout << std::endl;

	std::stack<int> s(mstack);

	//s++;			//impossible
	//s--;			//impossible
	//s.begin();	//impossible
	//s.end();		//impossible

	std::cout << BCYAN << "s.top = " BWHITE << s.top()
		<< END << std::endl;

	return 0;
}
