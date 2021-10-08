/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 09:48:50 by tsannie           #+#    #+#             */
/*   Updated: 2021/09/28 10:01:54 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

# define YELLOW		"\033[0;33m"

# define BBLACK		"\033[1;30m"
# define BRED		"\033[1;31m"
# define BGREEN		"\033[1;32m"
# define BYELLOW	"\033[1;33m"
# define BBLUE		"\033[1;34m"
# define BPURPLE	"\033[1;35m"
# define BCYAN		"\033[1;36m"
# define BWHITE		"\033[1;37m"
# define END		"\033[0m"

# define MAX_GRADE 1
# define MIN_GRADE 150

class Form;

class Bureaucrat
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

		Bureaucrat();
		Bureaucrat( std::string const & name, int grade );
		Bureaucrat( Bureaucrat const & src );
		virtual ~Bureaucrat();

		Bureaucrat &		operator=( Bureaucrat const & rhs );

		std::string	getName() const;
		int			getGrade() const;

		void		signForm(Form & form);
		void		incrGrad();
		void		decrGrad();

	private:

	const std::string	_name;
	int					_grade;

};

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i );

#endif /* ****************************************************** BUREAUCRAT_H */
