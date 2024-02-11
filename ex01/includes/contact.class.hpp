/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llai <llai@student.42london.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 20:39:08 by llai              #+#    #+#             */
/*   Updated: 2024/02/11 21:31:13 by llai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

#include <string>
class Contact {
public:
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string darkestSecret;
	Contact(char *firstName, char *lastName, char *nickName,
		 char *phoneNumber, char *darkestSecret);
	~Contact();

private:
	
};

#endif // !CONTACT_CLASS_HPP
