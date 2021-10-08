/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 11:06:28 by tsannie           #+#    #+#             */
/*   Updated: 2021/09/28 10:03:31 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm: public Form
{

	public:

		PresidentialPardonForm();
		PresidentialPardonForm( std::string const & target );
		PresidentialPardonForm( PresidentialPardonForm const & src );
		virtual ~PresidentialPardonForm();

		PresidentialPardonForm &		operator=( PresidentialPardonForm const & rhs );

		void		execute(Bureaucrat const & executor) const;

		std::string	getTarget() const;

	private:

		std::string _target;

};

std::ostream &			operator<<( std::ostream & o, PresidentialPardonForm const & i );

#endif /* ****************************************** PRESIDENTIALPARDONFORM_H */
