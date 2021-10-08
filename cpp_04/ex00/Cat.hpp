/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 13:12:29 by tsannie           #+#    #+#             */
/*   Updated: 2021/09/27 12:40:15 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat: public Animal
{

	public:

		Cat();
		Cat( Cat const & src );
		virtual ~Cat();

		Cat &		operator=( Cat const & rhs );

		virtual void	makeSound() const;

	private:

};

#endif /* ************************************************************* CAT_H */
