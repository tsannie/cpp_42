/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 19:59:55 by tsannie           #+#    #+#             */
/*   Updated: 2021/09/22 07:54:38 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"
# include <iostream>
# include <string>

class Point
{

	public:

		Point();
		Point( Point const & src );
		Point( Fixed const x, Fixed const y );
		~Point();

		Point &		operator=( Point const & rhs );

		Fixed const	&getX(void) const;
		Fixed const	&getY(void) const;

	private:

		Fixed const _x;
		Fixed const _y;
};

#endif /* *********************************************************** POINT_H */