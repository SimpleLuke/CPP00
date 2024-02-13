/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llai <llai@student.42london.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 20:39:08 by llai              #+#    #+#             */
/*   Updated: 2024/02/13 20:18:41 by llai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
#define CONTACT_CLASS_HPP

#include <string>
class Contact
{
 public:
  Contact()
      : _firstName(""),
        _lastName(""),
        _nickName(""),
        _phoneNumber(""),
        _darkestSecret(""){};
  Contact(const std::string &firstName, const std::string &lastName,
          const std::string &nickName, const std::string &phoneNumber,
          const std::string &darkestSecret);
  ~Contact();
  std::string getFirstName() const;
  std::string getLastName() const;
  std::string getNickName() const;
  std::string getPhoneNumber() const;
  std::string getDardestSecret() const;

 private:
  std::string _firstName;
  std::string _lastName;
  std::string _nickName;
  std::string _phoneNumber;
  std::string _darkestSecret;
};

#endif  // !CONTACT_CLASS_HPP
