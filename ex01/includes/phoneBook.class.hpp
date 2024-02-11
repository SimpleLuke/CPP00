/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llai <llai@student.42london.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 20:35:22 by llai              #+#    #+#             */
/*   Updated: 2024/02/11 21:05:25 by llai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H
# include "contact.class.hpp"

class PhoneBook {

public:
	PhoneBook(void);
	// PhoneBook(PhoneBook &&) = default;
	// PhoneBook(const PhoneBook &) = default;
	// PhoneBook &operator=(PhoneBook &&) = default;
	// PhoneBook &operator=(const PhoneBook &) = default;
	~PhoneBook(void);
	static const int MAX_CONTACTS = 8;
	Contact contacts[MAX_CONTACTS];

private:
	
};

#endif // !PHONEBOOK_CLASS_H
