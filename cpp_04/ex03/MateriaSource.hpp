/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 08:41:54 by tsannie           #+#    #+#             */
/*   Updated: 2021/09/08 15:29:07 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "AMateria.hpp"
# include "MateriaSource.hpp"

class MateriaSource : public IMateriaSource
{

	public:

		MateriaSource();
		MateriaSource( MateriaSource const & src );
		virtual ~MateriaSource();

		MateriaSource &		operator=( MateriaSource const & rhs );

		virtual void learnMateria(AMateria* j);
		virtual AMateria* createMateria(std::string const & type);

	private:

		AMateria*	_inventory[4];
};

#endif /* *************************************************** MATERIASOURCE_H */
