/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llai <llai@student.42london.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 20:40:22 by llai              #+#    #+#             */
/*   Updated: 2024/02/11 21:41:59 by llai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/contact.class.hpp"
#include <iostream>

Contact::Contact(char *firstName, char *lastName, char *nickName,
				 char *phoneNumber, char *darkestSecret)
				: firstName(firstName), lastName(lastName), nickName(nickName),
				phoneNumber(phoneNumber), darkestSecret(darkestSecret)
{
	std::cout << "Contact: Constrcutor called" << std::endl;
	// this->firstName = firstName;
	// this->lastName = lastName;
	// this->nickName = nickName;
	// this->phoneNumber = phoneNumber;
	// this->darkestSecret = darkestSecret;
	return ;
}

Contact::~Contact(void)
{
	std::cout << "Contact: Destructor called" << std::endl;
	return ;
}
