/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llai <llai@student.42london.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 20:40:22 by llai              #+#    #+#             */
/*   Updated: 2024/02/13 20:18:36 by llai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/contact.class.hpp"

#include <iostream>
#include <string>

Contact::Contact(const std::string &firstName, const std::string &lastName,
                 const std::string &nickName, const std::string &phoneNumber,
                 const std::string &darkestSecret)
    : _firstName(firstName),
      _lastName(lastName),
      _nickName(nickName),
      _phoneNumber(phoneNumber),
      _darkestSecret(darkestSecret)
{
  std::cout << "Contact: Constrcutor called" << std::endl;
  // this->firstName = firstName;
  // this->lastName = lastName;
  // this->nickName = nickName;
  // this->phoneNumber = phoneNumber;
  // this->darkestSecret = darkestSecret;
  return;
}

Contact::~Contact(void)
{
  std::cout << "Contact: Destructor called" << std::endl;
  return;
}

std::string Contact::getFirstName(void) const { return (this->_firstName); }

std::string Contact::getLastName(void) const { return (this->_lastName); }

std::string Contact::getNickName(void) const { return (this->_nickName); }

std::string Contact::getPhoneNumber(void) const { return (this->_phoneNumber); }

std::string Contact::getDardestSecret(void) const
{
  return (this->_darkestSecret);
}
