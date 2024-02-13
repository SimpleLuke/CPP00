/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llai <llai@student.42london.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 20:39:08 by llai              #+#    #+#             */
/*   Updated: 2024/02/13 22:31:52 by llai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
#define CONTACT_CLASS_HPP

#include <string>
class Contact
{
 public:
  Contact();
  // Contact(const std::string firstName, const std::string lastName,
  //         const std::string nickName, const std::string phoneNumber,
  //         const std::string darkestSecret);
  ~Contact();
  std::string getFirstName() const;
  std::string getLastName() const;
  std::string getNickName() const;
  std::string getPhoneNumber() const;
  std::string getDardestSecret() const;
  bool setFirstName(std::string firstName);
  bool setLastName(std::string lastName);
  bool setNickname(std::string nickName);
  bool setPhoneNumber(std::string phoneNumber);
  bool setDarkestSecret(std::string darkestSecret);

 private:
  std::string _firstName;
  std::string _lastName;
  std::string _nickName;
  std::string _phoneNumber;
  std::string _darkestSecret;
};

#endif  // !CONTACT_CLASS_HPP
