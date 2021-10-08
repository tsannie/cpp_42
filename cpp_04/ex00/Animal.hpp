/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 13:08:45 by tsannie           #+#    #+#             */
/*   Updated: 2021/09/07 15:26:58 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

# define BBLACK		"\033[1;30m"
# define BRED		"\033[1;31m"
# define BGREEN		"\033[1;32m"
# define BYELLOW	"\033[1;33m"
# define BBLUE		"\033[1;34m"
# define BPURPLE	"\033[1;35m"
# define BCYAN		"\033[1;36m"
# define BWHITE		"\033[1;37m"
# define END		"\033[0m"

class Animal
{

	public:

		Animal();
		Animal( Animal const & src );
		virtual ~Animal();

		Animal &		operator=( Animal const & rhs );

		std::string		getType() const;
		virtual void	makeSound() const;

	protected:
		std::string	_type;

	private:

};

#endif /* ********************************************************** ANIMAL_H */
