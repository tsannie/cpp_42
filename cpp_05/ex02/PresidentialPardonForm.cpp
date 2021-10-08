#include "PresidentialPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm():
	Form("Presidential", 25, 5), _target("Imotep")
{
}

PresidentialPardonForm::PresidentialPardonForm( std::string const & target ):
	Form("Presidential", 25, 5), _target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src ):
	Form(src.getName(), 25, 5)
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PresidentialPardonForm::~PresidentialPardonForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PresidentialPardonForm &				PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{
	if ( this != &rhs )
	{
		this->_target = rhs._target;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, PresidentialPardonForm const & i )
{
	o << BYELLOW "Target = " BCYAN << i.getTarget() << END;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	canExecute(executor);
	std::cout << BBLUE << this->_target << BWHITE " was forgiven by Zafod Beeblebrox."
		<< std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	PresidentialPardonForm::getTarget() const { return this->_target; }


/* ************************************************************************** */
