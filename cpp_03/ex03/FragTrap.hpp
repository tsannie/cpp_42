/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 14:02:39 by tsannie           #+#    #+#             */
/*   Updated: 2021/09/06 15:49:43 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{

	public:

		FragTrap();
		FragTrap(std::string name);
		FragTrap( FragTrap const & src );
		~FragTrap();

		FragTrap &		operator=( FragTrap const & rhs );

		void	highFivesGuys();
		void	attack(std::string const & target);

	protected:
		unsigned int _fixHit;
		unsigned int _fixAttack;

	private:

};

std::ostream &			operator<<( std::ostream & o, FragTrap const & i );

#endif /* ******************************************************** FragTrap_H */
