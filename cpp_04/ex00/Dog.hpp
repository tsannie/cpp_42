/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 13:12:39 by tsannie           #+#    #+#             */
/*   Updated: 2021/09/27 12:40:59 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog: public Animal
{

	public:

		Dog();
		Dog( Dog const & src );
		virtual ~Dog();

		Dog &		operator=( Dog const & rhs );

		virtual void	makeSound() const;

	private:

};

#endif /* ************************************************************* DOG_H */
