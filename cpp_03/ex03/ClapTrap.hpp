/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 09:27:45 by tsannie           #+#    #+#             */
/*   Updated: 2021/09/02 17:34:22 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

# define PURPLE		"\033[0;35m"

# define BBLACK		"\033[1;30m"
# define BRED		"\033[1;31m"
# define BGREEN		"\033[1;32m"
# define BYELLOW	"\033[1;33m"
# define BBLUE		"\033[1;34m"
# define BPURPLE	"\033[1;35m"
# define BCYAN		"\033[1;36m"
# define BWHITE		"\033[1;37m"
# define END		"\033[0m"

class ClapTrap
{

	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap( ClapTrap const & src );
		~ClapTrap();

		ClapTrap &		operator=( ClapTrap const & rhs );

		void			attack(std::string const & target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);

		std::string		getName() const;
		unsigned int	getHit() const;
		unsigned int	getEnergy() const;
		unsigned int	getAttack() const;


	protected:
		std::string		_name;
		unsigned int	_hit;
		unsigned int	_energy;
		unsigned int	_attack;

};

std::ostream &			operator<<( std::ostream & o, ClapTrap const & i );

#endif /* ******************************************************** CLAPTRAP_H */
