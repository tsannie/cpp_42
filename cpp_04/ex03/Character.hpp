/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 08:41:35 by tsannie           #+#    #+#             */
/*   Updated: 2021/09/08 16:33:24 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"


class Character: public ICharacter
{

	public:

		Character();
		Character( Character const & src );
		Character( std::string const & name );
		virtual ~Character();

		Character &		operator=( Character const & rhs );

		virtual std::string const & getName() const;
		virtual void	equip( AMateria* m );
		virtual void	unequip( int idx );
		virtual void	use( int idx, ICharacter& target );

	private:

		std::string	_name;
		AMateria*	_inventory[4];

};

#endif /* ******************************************************* CHARACTER_H */
