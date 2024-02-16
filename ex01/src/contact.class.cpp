/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llai <llai@student.42london.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 20:40:22 by llai              #+#    #+#             */
/*   Updated: 2024/02/16 00:40:56 by llai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/contact.class.hpp"

#include <string>

Contact::Contact()
    : _firstName(""),
      _lastName(""),
      _nickName(""),
      _phoneNumber(""),
      _darkestSecret("")
{
}

Contact::~Contact(void) {}

std::string Contact::getFirstName(void) const { return (this->_firstName); }

std::string Contact::getLastName(void) const { return (this->_lastName); }

std::string Contact::getNickName(void) const { return (this->_nickName); }

std::string Contact::getPhoneNumber(void) const { return (this->_phoneNumber); }

std::string Contact::getDardestSecret(void) const
{
  return (this->_darkestSecret);
}

bool Contact::setFirstName(std::string firstName)
{
  this->_firstName = firstName;
  return true;
}

bool Contact::setLastName(std::string lastName)
{
  this->_lastName = lastName;
  return true;
}

bool Contact::setNickname(std::string nickName)
{
  this->_nickName = nickName;
  return true;
}

bool Contact::setPhoneNumber(std::string phoneNumber)
{
  this->_phoneNumber = phoneNumber;
  return true;
}

bool Contact::setDarkestSecret(std::string darkestSecret)
{
  this->_darkestSecret = darkestSecret;
  return true;
}
