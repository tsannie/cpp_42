/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 16:53:52 by tsannie           #+#    #+#             */
/*   Updated: 2021/05/24 18:31:37 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
	private:
		std::string	_name;
		Weapon	*_weapon;

	public:
		HumanB(std::string name);
		void	setWeapon(Weapon &weapon);
		void	attack(void) const;

};

#endif
