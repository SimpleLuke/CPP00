/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llai <llai@student.42london.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 14:42:06 by llai              #+#    #+#             */
/*   Updated: 2024/03/26 16:16:04 by llai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

#include <ctime>
#include <iomanip>
#include <iostream>

Account::Account(int initial_deposit)
{
  this->_accountIndex = Account::_nbAccounts;
  this->_amount = initial_deposit;
  this->_nbDeposits = 0;
  this->_nbWithdrawals = 0;
  Account::_totalAmount += initial_deposit;
  Account::_displayTimestamp();
  std::cout << "index:" << this->_accountIndex << ";"
            << "amount:" << this->checkAmount() << ";"
            << "created" << std::endl;
  Account::_nbAccounts++;
}

Account::~Account(void)
{
  Account::_displayTimestamp();
  std::cout << "index:" << this->_accountIndex << ";"
            << "amount:" << this->checkAmount() << ";"
            << "closed" << std::endl;
}

void Account::_displayTimestamp(void)
{
  time_t t = time(NULL);
  struct tm *lt = localtime(&t);
  std::cout << "[" << lt->tm_year + 1900 << std::setfill('0') << std::setw(2)
            << lt->tm_mon + 1 << std::setfill('0') << std::setw(2)
            << lt->tm_mday << "_" << std::setfill('0') << std::setw(2)
            << lt->tm_hour << std::setfill('0') << std::setw(2) << lt->tm_min
            << std::setfill('0') << std::setw(2) << lt->tm_sec << "] ";
}

int Account::getNbAccounts(void) { return Account::_nbAccounts; }

int Account::getTotalAmount(void) { return Account::_totalAmount; }

int Account::getNbDeposits(void) { return Account::_totalNbDeposits; }

int Account::getNbWithdrawals(void) { return Account::_totalNbWithdrawals; }

void Account::displayAccountsInfos(void)
{
  Account::_displayTimestamp();
  std::cout << "accounts:" << Account::_nbAccounts
            << ";total:" << Account::_totalAmount
            << ";deposits:" << Account::_totalNbDeposits
            << ";withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

int Account::checkAmount(void) const { return this->_amount; }

void Account::displayStatus(void) const
{
  Account::_displayTimestamp();
  std::cout << "index:" << this->_accountIndex
            << ";amount:" << this->checkAmount()
            << ";deposits:" << this->_nbDeposits
            << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void Account::makeDeposit(int deposit)
{
  this->_nbDeposits++;
  Account::_displayTimestamp();
  std::cout << "index:" << this->_accountIndex
            << ";p_amount:" << this->checkAmount() << ";deposit:" << deposit
            << ";amount:" << this->_amount + deposit
            << ";nb_deposits:" << this->_nbDeposits << std::endl;
  this->_amount += deposit;
  Account::_totalNbDeposits++;
  Account::_totalAmount += deposit;
}

bool Account::makeWithdrawal(int withdrawal)
{
  Account::_displayTimestamp();
  if (this->_amount >= withdrawal)
  {
    this->_nbWithdrawals++;
    std::cout << "index:" << this->_accountIndex
              << ";p_amount:" << this->checkAmount()
              << ";withdrawal:" << withdrawal
              << ";amount:" << this->_amount - withdrawal
              << ";nb_withdrawals:" << this->_nbDeposits << std::endl;
    this->_amount -= withdrawal;
    Account::_totalNbWithdrawals++;
    Account::_totalAmount -= withdrawal;
    return (false);
  }
  else
  {
    std::cout << "index:" << this->_accountIndex
              << ";p_amount:" << this->checkAmount() << ";withdrawal:refused"
              << std::endl;
    return (true);
  }
}

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;
