/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 08:02:11 by tsannie           #+#    #+#             */
/*   Updated: 2021/09/22 14:00:12 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <string>
# include <iostream>


# define YELLOW	"\033[0;33m"
# define END		"\033[0m"

template<typename T>
void	iter(T *tab, size_t len, void (*f)(T& elem))
{
	size_t	i;
	for (i = 0 ; i < len ; i++)
		f(tab[i]);
}

#endif