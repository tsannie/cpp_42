/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 14:02:39 by tsannie           #+#    #+#             */
/*   Updated: 2021/09/06 15:40:58 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{

	public:

		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap( ScavTrap const & src );
		~ScavTrap();

		ScavTrap &		operator=( ScavTrap const & rhs );

		void	guardGate();
		void	attack(std::string const & target);

	protected:
		unsigned int _fixEnergy;

	private:

};

std::ostream &			operator<<( std::ostream & o, ScavTrap const & i );

#endif /* ******************************************************** SCAVTRAP_H */
