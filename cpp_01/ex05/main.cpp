/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 11:43:46 by tsannie           #+#    #+#             */
/*   Updated: 2021/07/26 12:44:05 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(void)
{
	Karen msg;

	msg.complain("DEBUG");
	msg.complain("INFO");
	msg.complain("WARNING");
	msg.complain("ERROR");
}