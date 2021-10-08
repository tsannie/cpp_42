/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 09:29:17 by tsannie           #+#    #+#             */
/*   Updated: 2021/09/28 10:03:21 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{

	public:

		Intern();
		Intern( Intern const & src );
		virtual ~Intern();

		Intern &		operator=( Intern const & rhs );

		Form	*makeForm(std::string const & name, std::string const & target);

	private:

		Form	*_createShrubbery(std::string const & target);
		Form	*_createRobotomy(std::string const & target);
		Form	*_createPresidential(std::string const & target);
};

#endif /* ********************************************************** INTERN_H */
