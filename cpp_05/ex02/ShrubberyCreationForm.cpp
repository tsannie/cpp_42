/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 09:17:11 by tsannie           #+#    #+#             */
/*   Updated: 2021/09/14 11:10:32 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm():
	Form("Shrubbery", 145, 137), _target("Imotep")
{
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string const & target ):
	Form("Shrubbery", 145, 137), _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src ):
	Form(src.getName(), 145, 137)
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ShrubberyCreationForm &				ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{
	if ( this != &rhs )
	{
		this->_target = rhs._target;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, ShrubberyCreationForm const & i )
{
	o << BYELLOW "Target = " BCYAN << i.getTarget() << END;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::ofstream out;

	canExecute(executor);

	out.open(this->_target + "_shrubbery", std::ofstream::out | std::ofstream::trunc);

	out << "					--:--:----." << std::endl
		<< "				:-/:`      .` :-:" << std::endl
		<< "				`/               ::-" << std::endl
		<< "		`..:--:-/-:              -/`" << std::endl
		<< "		--:```      `               :/-:---.`" << std::endl
		<< "	-:.                ``         ./    ``/." << std::endl
		<< "	./  ` ``         ../.:::-`     :`      `/." << std::endl
		<< "	`:/-:.:.`/-.      /..   ../-    `        `+" << std::endl
		<< "`.:-..      . :      ::`     -:              +`" << std::endl
		<< "`/-`      ``.-         `                     .+`" << std::endl
		<< "+``    `:::-./                             `/-.:-" << std::endl
		<< ":-`    ./.                       ` ---      `   /-" << std::endl
		<< "`o`     :-    .:--/-o:`         o:/``/-:        :-" << std::endl
		<< "-../.      .+..     .`         .     -::       /." << std::endl
		<< "	-/`     +`                         .+      ./" << std::endl
		<< "	-:-    .+                        `--    `-/" << std::endl
		<< "	`./-`  `                             `-/`" << std::endl
		<< "		`-:.             .          ` `-.+/:`" << std::endl
		<< "		/.       ` `:.:s-`..-.-:-::/o.:-/" << std::endl
		<< "		`-:-.:..::://`/.///: ./`/o-:/-:+-" << std::endl
		<< "			`` .:-.-::``:.o-:  o-`://:///" << std::endl
		<< "				``.....:-``.  ` ./://-`" << std::endl
		<< "					.//. ` ``   `-:-." << std::endl
		<< "					-+:`     /:`" << std::endl
		<< "						`o/.   :-" << std::endl
		<< "						+.-   /`" << std::endl
		<< "						:.-   /`" << std::endl
		<< "						`/    .:" << std::endl
		<< "						o    ./" << std::endl
		<< "						o   .`+" << std::endl
		<< "						./   --/" << std::endl
		<< "						/.   -/+" << std::endl
		<< "						o    .:o" << std::endl
		<< "						`+``  .:o" << std::endl
		<< "						-:-   `/y" << std::endl
		<< "						:-/.   `/:``" << std::endl
		<< "					`./..`    ``..-`" << std::endl
		<< "					`::-:-: /-. .+--.---`" << std::endl
		<< "				`//:-.  `// `.-.-- .../`" << std::endl
		<< "				.o-`            `.-/" << std::endl;
		out.close();
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	ShrubberyCreationForm::getTarget() const { return this->_target; }


/* ************************************************************************** */
