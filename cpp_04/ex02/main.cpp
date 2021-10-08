/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 13:18:58 by tsannie           #+#    #+#             */
/*   Updated: 2021/09/13 08:14:44 by tsannie          ###   ########.fr       */
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
	//const Animal* e = new Animal();	// not possible

	//delete e;
	delete j;
	delete i;
	}
}
