/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 23:30:01 by tsannie           #+#    #+#             */
/*   Updated: 2021/10/08 10:38:54 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.class.hpp"
#include <string>
#include <iostream>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int		Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int		Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int		Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int		Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << " accounts:" << getNbAccounts()
			<< ";total:" << getTotalAmount()
			<< ";deposits:" << getNbDeposits()
			<< ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	this->_amount += deposit;
	this->_nbDeposits++;
	_totalAmount += deposit;
	_totalNbDeposits++;
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex
			<< ";p_amount:" << this->_amount - deposit
			<< ";deposit:" << deposit
			<< ";amount:" << this->_amount
			<< ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex
			<< ";p_amount:" << this->_amount;
	if (withdrawal < this->_amount)
	{
		this->_nbWithdrawals++;
		this->_amount -= withdrawal;
		_totalNbWithdrawals++;
		_totalAmount -= withdrawal;
		std::cout << ";withdrawal:" << withdrawal
				<< ";amount:" << this->_amount
				<<  ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		return (true);
	}
	else
		std::cout << ";withdrawal:refused" << std::endl;
	return (false);
}

int		Account::checkAmount( void ) const
{
	return (this->_amount);
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex
			<< ";amount:" << this->_amount
			<< ";deposits:" << this->_nbDeposits
			<< ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void )
{
	time_t	now;
	tm	*ltm;
	std::string	nb;

	now = time(0);
	ltm = localtime(&now);
	std::cout << "[" << std::to_string(1900 + ltm->tm_year);
	nb = std::to_string(1 + ltm->tm_mon);
	std::cout << std::string( 2 - nb.length(), '0') << nb;
	nb = std::to_string(ltm->tm_mday);
	std::cout << std::string( 2 - nb.length(), '0') << nb << "_";
	nb = std::to_string(ltm->tm_hour);
	std::cout << std::string( 2 - nb.length(), '0') << nb;
	nb = std::to_string(ltm->tm_min);
	std::cout << std::string( 2 - nb.length(), '0') << nb;
	nb = std::to_string(ltm->tm_sec);
	std::cout << std::string( 2 - nb.length(), '0') << nb << "]";
}

Account::Account( int initial_deposit )
{
	this->_accountIndex = _nbAccounts;
	_nbAccounts++;
	this->_amount = initial_deposit;
	_totalAmount += initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex
			<< ";amount:" << this->_amount
			<< ";created" << std::endl;

}

Account::~Account( void )
{
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex
			<< ";amount:" << this->_amount
			<< ";closed" << std::endl;
}
