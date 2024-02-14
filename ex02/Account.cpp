/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llai <llai@student.42london.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 14:42:06 by llai              #+#    #+#             */
/*   Updated: 2024/02/14 15:31:00 by llai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iomanip>
#include <iostream>

Account::Account (int initial_deposit)
{
	this->_accountIndex = Account::_nbAccounts;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_totalAmount += initial_deposit;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";" << "amount:" << this->_amount << ";" << "created" << std::endl;
	Account::_nbAccounts++;
}

Account::~Account (void)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";" << "amount:" << this->_amount << ";" << "closed" << std::endl;
}

void	Account::_displayTimestamp(void)
{
	time_t t = time(NULL);
	struct tm *lt = localtime(&t);
	std::cout << "[" << lt->tm_year + 1900 << std::setfill('0') << std::setw(2) << lt->tm_mon + 1 << std::setfill('0') << std::setw(2) << lt->tm_mday << "_" << std::setfill('0') << std::setw(2) << lt->tm_hour << std::setfill('0') << std::setw(2) << lt->tm_min << std::setfill('0') << std::setw(2) << lt->tm_sec << "] ";
}

int		Account::getNbAccounts(void)
{
	return Account::_nbAccounts;
}

int		Account::getTotalAmount(void)
{
	return Account::_totalAmount;
}

int		Account::getNbDeposits(void)
{
	return Account::_totalNbDeposits;
}

int		Account::getNbWithdrawals(void)
{
	return Account::_totalNbWithdrawals;
}

void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts << ";total:"<< Account::_totalAmount << ";deposits:" << Account::_totalNbDeposits << ";withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;
