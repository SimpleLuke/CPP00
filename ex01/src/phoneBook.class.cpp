/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llai <llai@student.42london.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 20:42:42 by llai              #+#    #+#             */
/*   Updated: 2024/02/13 22:40:02 by llai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/phoneBook.class.hpp"

#include <iostream>
#include <ostream>

PhoneBook::PhoneBook(void) : _numContacts(0)
{
  return;
}

PhoneBook::~PhoneBook(void)
{
  std::cout << "PhoneBook:Destructor called" << std::endl;
  return;
}

bool PhoneBook::addContact(const std::string firstName,
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
  std::cout << "Contact added successfully" << std::endl;
  return true;
}
void PhoneBook::showContacts(void) const
{
  if (this->_numContacts == 0)
  {
    std::cout << "Phonebook is empty" << std::endl;
    return;
  }

  std::cout << "Contacts in the phonebook" << std::endl;
  for (int i = 0; i < this->_numContacts; ++i)
  {
    std::cout << this->_contacts[i].getFirstName() << std::endl;
  }
}
