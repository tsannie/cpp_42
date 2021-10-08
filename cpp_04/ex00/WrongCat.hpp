/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 13:12:29 by tsannie           #+#    #+#             */
/*   Updated: 2021/09/07 13:57:54 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{

	public:

		WrongCat();
		WrongCat( WrongCat const & src );
		virtual ~WrongCat();

		WrongCat &		operator=( WrongCat const & rhs );

		void	makeSound() const;

	private:

};

#endif /* ************************************************************* WrongCat_H */
