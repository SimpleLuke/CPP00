/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llai <llai@student.42london.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 20:35:22 by llai              #+#    #+#             */
/*   Updated: 2024/02/13 22:02:00 by llai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
#define PHONEBOOK_CLASS_H
#include "contact.class.hpp"

class PhoneBook
{
 public:
  PhoneBook(void);
  ~PhoneBook(void);

  bool addContact(const std::string firstName, const std::string lastName,
                  const std::string nickName, const std::string phoneNumber,
                  const std::string darkestSecret);
  void showContacts(void) const;

 private:
  static const int MAX_CONTACTS = 8;
  Contact _contacts[MAX_CONTACTS];
  int _numContacts;
};

#endif  // !PHONEBOOK_CLASS_H
