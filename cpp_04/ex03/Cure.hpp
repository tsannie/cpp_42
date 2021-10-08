/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 08:41:43 by tsannie           #+#    #+#             */
/*   Updated: 2021/09/08 15:26:30 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure: public AMateria
{

	public:

		Cure();
		Cure( Cure const & src );
		virtual ~Cure();

		virtual Cure &		operator=( Cure const & rhs );

		virtual AMateria*	clone() const;
		virtual void		use(ICharacter& target);

	private:

};

#endif /* ************************************************************ CURE_H */
