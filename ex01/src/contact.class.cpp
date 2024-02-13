/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llai <llai@student.42london.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 20:40:22 by llai              #+#    #+#             */
/*   Updated: 2024/02/13 22:39:57 by llai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/contact.class.hpp"

#include <iostream>
#include <string>

Contact::Contact()
    : _firstName(""),
      _lastName(""),
      _nickName(""),
      _phoneNumber(""),
      _darkestSecret("")
{
  std::cout << "Contact: Constrcutor called" << std::endl;
  return;
};
// Contact::Contact(const std::string firstName, const std::string lastName,
//                  const std::string nickName, const std::string phoneNumber,
//                  const std::string darkestSecret)
//     : _firstName(firstName),
//       _lastName(lastName),
//       _nickName(nickName),
//       _phoneNumber(phoneNumber),
//       _darkestSecret(darkestSecret)
// {
//   std::cout << "Contact: Constrcutor called" << std::endl;
//   // this->firstName = firstName;
//   // this->lastName = lastName;
//   // this->nickName = nickName;
//   // this->phoneNumber = phoneNumber;
//   // this->darkestSecret = darkestSecret;
//   return;
// }

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
