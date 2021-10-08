/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 11:43:46 by tsannie           #+#    #+#             */
/*   Updated: 2021/07/27 16:44:15 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
# include <string>

int	main(int ac, char **av)
{
	Karen	msg;

	if (ac == 2)
		msg.complain(av[1]);
	else
		std::cout << BRED "Works with only 1 argument !" END <<  std::endl;
}