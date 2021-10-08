/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 12:15:08 by tsannie           #+#    #+#             */
/*   Updated: 2021/05/31 17:08:42 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <string>
# include <iostream>
# include <fstream>
# include <math.h>

class Fixed
{
	private:
		int	_a;
		static const int	_bits = 8;

	public:
		Fixed(void);
		Fixed(Fixed const & cpy);
		Fixed(int const val);
		Fixed(float const val);
		~Fixed(void);

		int toInt(void) const;
		float toFloat(void) const;
		int getRawBits(void) const;
		void setRawBits(int const raw);
		Fixed &	operator=(Fixed const & rhs);

};

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs);

#endif
