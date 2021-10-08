/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 17:32:34 by tsannie           #+#    #+#             */
/*   Updated: 2021/06/25 01:01:35 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <ctype.h>
# include <string>

class Contact
{
	private:
		int			index;
		std::string	_firstname;
		std::string	_lastname;
		std::string	_nickname;
		std::string	_login;
		std::string	_postal_address;
		std::string _email;
		std::string	_phone_num;
		std::string	_birthday;
		std::string	_fav_meal;
		std::string	_underwear_color;
		std::string	_secret;

	public:
		void		setContact(int stock);
		int			getIndex(void) const;
		std::string	getFirstname(void) const;
		std::string	getLastname(void) const;
		std::string	getLogin(void) const;
		void		getFullcontact(void) const;
};

#endif
