/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 16:42:06 by tsannie           #+#    #+#             */
/*   Updated: 2021/06/25 00:43:34 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int			Contact::getIndex(void) const
{
	return (this->index);
}

std::string	Contact::getFirstname(void) const
{
	return (this->_firstname);
}

std::string	Contact::getLastname(void) const
{
	return (this->_lastname);
}

std::string	Contact::getLogin(void) const
{
	return (this->_login);
}

void		Contact::setContact(int stock)
{
	this->index = stock + 1;
	std::cout << "First name: ";
	std::getline(std::cin, this->_firstname);
	std::cout << "Last name: ";
	std::getline(std::cin, this->_lastname);
	std::cout << "Nickname: ";
	std::getline(std::cin, this->_nickname);
	std::cout << "Login: ";
	std::getline(std::cin, this->_login);
	std::cout << "Postal adress: ";
	std::getline(std::cin, this->_postal_address);
	std::cout << "Email: ";
	std::getline(std::cin, this->_email);
	std::cout << "Phone number: ";
	std::getline(std::cin, this->_phone_num);
	std::cout << "Date of birthday: ";
	std::getline(std::cin, this->_birthday);
	std::cout << "Favorite meal: ";
	std::getline(std::cin, this->_fav_meal);
	std::cout << "The color of your underwear: ";
	std::getline(std::cin, this->_underwear_color);
	std::cout << "Darkest secret: ";
	std::getline(std::cin, this->_secret);
}

void		Contact::getFullcontact(void) const
{
	std::cout << std::endl;
	std::cout << "First name:                     " << this->_firstname << std::endl;
	std::cout << "Last name:                      " << this->_lastname << std::endl;
	std::cout << "Nickname:                       " << this->_nickname << std::endl;
	std::cout << "Login:                          " << this->_login << std::endl;
	std::cout << "Postal adress:                  " << this->_postal_address << std::endl;
	std::cout << "Email:                          " << this->_email << std::endl;
	std::cout << "Phone number:                   " << this->_phone_num << std::endl;
	std::cout << "Date of birthday:               " << this->_birthday << std::endl;
	std::cout << "Favorite meal:                  " << this->_fav_meal<< std::endl;
	std::cout << "The color of your underwear:    " << this->_underwear_color << std::endl;
	std::cout << "Darkest secret:                 " << this->_secret << std::endl;
	std::cout << std::endl;
}
