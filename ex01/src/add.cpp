/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llai <llai@student.42london.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 21:45:17 by llai              #+#    #+#             */
/*   Updated: 2024/02/13 21:46:32 by llai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/myAwesomePhonebook.hpp"

std::string promptFirstName(void)
{
  std::string firstName;

  do
  {
    std::cout << "First name: ";
    std::getline(std::cin, firstName);
  } while (firstName.empty());
  return firstName;
}

std::string promptLastName(void)
{
  std::string lastName;

  do
  {
    std::cout << "Last name: ";
    std::getline(std::cin, lastName);
  } while (lastName.empty());
  return lastName;
}

std::string promptNickName(void)
{
  std::string nickName;

  do
  {
    std::cout << "Nickname: ";
    std::getline(std::cin, nickName);
  } while (nickName.empty());
  return nickName;
}

std::string promptPhoneNumber(void)
{
  std::string phoneNumber;

  do
  {
    std::cout << "Phone Number: ";
    std::getline(std::cin, phoneNumber);
  } while (phoneNumber.empty());
  return phoneNumber;
}

std::string promptDarkestSecret(void)
{
  std::string darkestSecret;

  do
  {
    std::cout << "Darkest Secret: ";
    std::getline(std::cin, darkestSecret);
  } while (darkestSecret.empty());
  return darkestSecret;
}

bool addNewContact(PhoneBook &phoneBook)
{
  std::string firstName;
  std::string lastName;
  std::string nickName;
  std::string phoneNumber;
  std::string darkestSecret;

  promptFirstName();
  promptLastName();
  promptNickName();
  promptPhoneNumber();
  promptDarkestSecret();
  phoneBook.addContact(firstName, lastName, nickName, phoneNumber,
                       darkestSecret);
  return true;
}
