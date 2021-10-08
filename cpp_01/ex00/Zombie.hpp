/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 11:09:22 by user42            #+#    #+#             */
/*   Updated: 2021/07/22 16:33:25 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

# define BRED		"\033[1;31m"
# define BYELLOW	"\033[1;33m"
# define BCYAN		"\033[1;36m"
# define END		"\033[0m"

class Zombie
{
	private:
		std::string	_name;

	public:
		~Zombie(void);
		Zombie(std::string name);
		void	announce(void);
};

void	randomChump(std::string name);
Zombie	*newZombie(std::string name);

#endif