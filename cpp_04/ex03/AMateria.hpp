/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 08:12:42 by tsannie           #+#    #+#             */
/*   Updated: 2021/09/13 08:03:43 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include "ICharacter.hpp"
# include <iostream>
# include <string>

class ICharacter;

class AMateria
{

	public:

		AMateria();
		AMateria( AMateria const & src );
		AMateria(std::string const & type);
		virtual ~AMateria();

		virtual AMateria &		operator=( AMateria const & rhs );

		std::string			const & getType() const; //Returns the materia type
		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target);

	protected:

		std::string	_type;

};

#endif /* ******************************************************** AMATERIA_H */
