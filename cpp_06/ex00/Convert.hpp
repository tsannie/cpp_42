#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <string>
# include <limits>
# include <cmath>
# include <string>
# include <cctype>
# include <sstream>

class Convert
{

	public:

		class Impossible: public std::exception {
		public:
			virtual const char * what() const throw() {
				return ("impossible");
			}
		};

		class Display: public std::exception {
		public:
			virtual const char * what() const throw() {
				return ("Non displayable");
			}
		};

		class convDouble: public std::exception {
		public:
			virtual const char * what() const throw() {
				return ("AllImpossible.");
			}
		};

		Convert();
		Convert( double value );
		Convert( Convert const & src );
		~Convert();

		Convert &		operator=( Convert const & rhs );

		void	displayConvert(void);

	private:

		void		_checkImpossible(void) const;
		void		_checkDisplay(void) const;
		void		_toChar(void) const;
		void		_toInt(void) const;
		void		_toFloat(void) const;
		void		_toDouble(void) const;
		std::string	_value;
		double		_double;

};

#endif /* ********************************************************* CONVERT_H */
