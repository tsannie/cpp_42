/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 13:18:58 by tsannie           #+#    #+#             */
/*   Updated: 2021/09/27 13:25:51 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AMateria.hpp"
# include "Character.hpp"
# include "Cure.hpp"
# include "Ice.hpp"
# include "ICharacter.hpp"
# include "IMateriaSource.hpp"
# include "MateriaSource.hpp"

int main()
{
	{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;
	return 0;
	}
}
