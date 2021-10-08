/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 16:51:37 by tsannie           #+#    #+#             */
/*   Updated: 2021/05/24 18:09:47 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon
{
	private:
		std::string _type;

	public:
		std::string const	&getType(void) const;
		void	setType(std::string type);
		Weapon(std::string type);

};

#endif
