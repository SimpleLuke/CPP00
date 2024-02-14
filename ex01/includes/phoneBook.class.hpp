/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llai <llai@student.42london.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 20:35:22 by llai              #+#    #+#             */
/*   Updated: 2024/02/14 12:47:17 by llai             ###   ########.fr       */
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

	void	addNewContact(void);
  void showContacts(void);

 private:
  static const int MAX_CONTACTS = 8;
  Contact _contacts[MAX_CONTACTS];
  int _numContacts;

	std::string _promptFirstName(void);
	std::string _promptLastName(void);
	std::string _promptNickName(void);
	std::string _promptPhoneNumber(void);
	std::string _promptDarkestSecret(void);
  bool _addContact(const std::string firstName, const std::string lastName,
                  const std::string nickName, const std::string phoneNumber,
                  const std::string darkestSecret);
	std::string _truncate(std::string str, size_t width);

};

#endif  // !PHONEBOOK_CLASS_H
