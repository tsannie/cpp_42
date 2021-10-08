/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 12:38:13 by tsannie           #+#    #+#             */
/*   Updated: 2021/09/06 15:32:57 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{

	public:

		DiamondTrap();
		DiamondTrap( std::string name );
		DiamondTrap( DiamondTrap const & src );
		~DiamondTrap();

		DiamondTrap &		operator=( DiamondTrap const & rhs );

		std::string	getDiamondName() const;
		void		whoAmI();
		void		attack(std::string const & target);

	private:

		std::string	_name;

};

std::ostream &			operator<<( std::ostream & o, DiamondTrap const & i );

#endif /* ***************************************************** DIAMONDTRAP_H */
