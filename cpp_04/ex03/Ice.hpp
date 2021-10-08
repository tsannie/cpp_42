/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 08:41:47 by tsannie           #+#    #+#             */
/*   Updated: 2021/09/08 15:26:56 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice: public AMateria
{

	public:

		Ice();
		Ice( Ice const & src );
		virtual ~Ice();

		virtual Ice &		operator=( Ice const & rhs );

		virtual AMateria*	clone() const;
		virtual void		use(ICharacter& target);

	private:

};

#endif /* ************************************************************* ICE_H */
