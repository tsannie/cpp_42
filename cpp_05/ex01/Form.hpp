/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 13:32:31 by tsannie           #+#    #+#             */
/*   Updated: 2021/09/28 10:02:00 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{

	public:
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		Form();
		Form( std::string const & name, int const grad_sign, int const grad_exec);
		Form( Form const & src );
		virtual ~Form();

		Form &		operator=( Form const & rhs );

		void	beSigned(Bureaucrat const & src);

		std::string	getName() const;
		bool		getSign() const;
		int			getGradSign() const;
		int			getGradExec() const;

	private:
		const std::string	_name;
		bool				_sign;
		const int			_grad_sign;
		const int			_grad_exec;


};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */
