#ifndef BRAIN_HPP
# define BRAIN_HPP

#include "Animal.hpp"

class Brain
{

	public:

		Brain();
		Brain( Brain const & src );
		virtual ~Brain();

		Brain &		operator=( Brain const & rhs );

	private:

		std::string _ideas[100];

};

#endif /* *********************************************************** BRAIN_H */
