/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 13:18:58 by tsannie           #+#    #+#             */
/*   Updated: 2021/09/27 12:51:56 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"

int main()
{
	{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;
	delete i;
	std::cout << std::endl;
	}

	{
	const Dog* j = new Dog();
	Dog	i;

	std::cout << std::endl << YELLOW "Test if Dog has a different Brain():" END
		<< std::endl;

	i = *j;

	std::cout << BWHITE "Address brain j :" BCYAN << j->getBrain() << END << std::endl;
	std::cout << BWHITE "Address brain i :" BCYAN << i.getBrain() << END << std::endl;

	delete j;
	std::cout << std::endl;
	}

	{
	int				i;
	const Animal*	array[10];

	for (i = 0 ; i < 5 ; i++)
		array[i] = new Dog();

	for (i = 0 ; i < 5 ; i++)
		array[i + 5] = new Cat();

	for (i = 0 ; i < 10 ; i++)
		delete array[i];
	}
}
