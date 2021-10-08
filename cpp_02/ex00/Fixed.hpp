/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 12:15:08 by tsannie           #+#    #+#             */
/*   Updated: 2021/05/31 17:05:13 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <string>
# include <iostream>
# include <fstream>

class Fixed
{
	private:
		int	_a;
		static const int	_bits = 8;

	public:
		Fixed(void);
		Fixed(Fixed const & cpy);
		~Fixed(void);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		Fixed &	operator=(Fixed const & rhs);

};

#endif
