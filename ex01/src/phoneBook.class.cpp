/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llai <llai@student.42london.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 20:42:42 by llai              #+#    #+#             */
/*   Updated: 2024/02/14 12:49:44 by llai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/phoneBook.class.hpp"

#include <iomanip>
#include <iostream>
#include <ostream>
#include <string>
#include <limits>

PhoneBook::PhoneBook(void) : _numContacts(0){}

PhoneBook::~PhoneBook(void){}

std::string PhoneBook::_promptFirstName(void)
{
  std::string firstName;

	while (true)
	{
		std::cout << "First Name: ";
		std::getline(std::cin, firstName);
		if (!firstName.empty())
			break;
		std::cout << "Input cannot be empty" << std::endl;
	}

  return firstName;
}

std::string PhoneBook::_promptLastName(void)
{
  std::string lastName;

	while (true)
	{
		std::cout << "Last Name: ";
		std::getline(std::cin, lastName);
		if (!lastName.empty())
			break;
		std::cout << "Input cannot be empty" << std::endl;
	}
  return lastName;
}

std::string PhoneBook::_promptNickName(void)
{
  std::string nickName;

	while (true)
	{
		std::cout << "Nickname: ";
		std::getline(std::cin, nickName);
		if (!nickName.empty())
			break;
		std::cout << "Input cannot be empty" << std::endl;
	}
  return nickName;
}

std::string PhoneBook::_promptPhoneNumber(void)
{
  std::string phoneNumber;

	while (true)
	{
		std::cout << "Phone Number: ";
		std::getline(std::cin, phoneNumber);
		if (!phoneNumber.empty())
			break;
		std::cout << "Input cannot be empty" << std::endl;
	}
  return phoneNumber;
}

std::string PhoneBook::_promptDarkestSecret(void)
{
  std::string darkestSecret;

	while (true)
	{
		std::cout << "Darkest Secret: ";
		std::getline(std::cin, darkestSecret);
		if (!darkestSecret.empty())
			break;
		std::cout << "Input cannot be empty" << std::endl;
	}
  return darkestSecret;
}

bool PhoneBook::_addContact(const std::string firstName,
                           const std::string lastName,
                           const std::string nickName,
                           const std::string phoneNumber,
                           const std::string darkestSecret)
{
  if (this->_numContacts >= this->MAX_CONTACTS)
  {
    std::cout << "Phonebook is full." << std::endl;
    return false;
  }

  this->_contacts[this->_numContacts].setFirstName(firstName);
  this->_contacts[this->_numContacts].setLastName(lastName);
  this->_contacts[this->_numContacts].setNickname(nickName);
  this->_contacts[this->_numContacts].setPhoneNumber(phoneNumber);
  this->_contacts[this->_numContacts].setDarkestSecret(darkestSecret);
  this->_numContacts++;
  return true;
}

std::string PhoneBook::_truncate(std::string str, size_t width)
{
	if (str.length() > width)
		return str.substr(0, width - 1) + ".";
	return str;
}

void PhoneBook::addNewContact(void)
{
  std::string firstName;
  std::string lastName;
  std::string nickName;
  std::string phoneNumber;
  std::string darkestSecret;

  firstName = this->_promptFirstName();
  lastName = this->_promptLastName();
  nickName = this->_promptNickName();
  phoneNumber = this->_promptPhoneNumber();
  darkestSecret = this->_promptDarkestSecret();
  this->_addContact(firstName, lastName, nickName, phoneNumber,
                       darkestSecret);
  return;
}

void PhoneBook::showContacts(void)
{
  if (this->_numContacts == 0)
  {
    std::cout << "Phonebook is empty" << std::endl;
    return;
  }

	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;


  for (int i = 0; i < this->_numContacts; ++i)
  {
	   std::cout << "|" << std::setw(10) << i << "|" << std::setw(10) << this->_truncate(this->_contacts[i].getFirstName(), 10) << "|" << std::setw(10) << this->_truncate(this->_contacts[i].getLastName(), 10) << "|" << std::setw(10) << this->_truncate(this->_contacts[i].getNickName(), 10) << "|" << std::endl;
  }
	std::cout << "|-------------------------------------------|" << std::endl;
	int	idx;
	std::cout << "(Enter the index to display an entry)" << std::endl;
	std::cin >> idx;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	if (idx >= 0 && idx < this->_numContacts)
	{
		std::cout << "First Name:\t" << this->_contacts[idx].getFirstName() << std::endl;
		std::cout << "Last Name:\t" << this->_contacts[idx].getLastName() << std::endl;
		std::cout << "Nickname:\t" << this->_contacts[idx].getNickName() << std::endl;
		std::cout << "Phone Number:\t" << this->_contacts[idx].getPhoneNumber() << std::endl;
		std::cout << "Darkest Secret:\t" << this->_contacts[idx].getDardestSecret() << std::endl;
	}
	if (idx < 0)
		std::cout << "Invalid Index: Index must be positive" << std::endl;
	else if (idx >= this->_numContacts)
		std::cout << "Invalid Index: Out of range" << std::endl;
}
