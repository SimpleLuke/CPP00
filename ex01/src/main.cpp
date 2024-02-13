/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llai <llai@student.42london.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 20:46:13 by llai              #+#    #+#             */
/*   Updated: 2024/02/13 22:00:48 by llai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/myAwesomePhonebook.hpp"

void searchContact(PhoneBook &phoneBook)
{
  phoneBook.showContacts();
  return;
}

int main(void)
{
  PhoneBook phoneBook;
  std::string command;

  while (true)
  {
    std::cout << "Welcome to My Awesome PhoneBook" << std::endl;
    std::cout << "Enter commands: ADD, SEARCH or EXIT" << std::endl;
    std::getline(std::cin, command);
    if (command == "EXIT") break;
    if (command == "ADD") addNewContact(phoneBook);
    if (command == "SEARCH") searchContact(phoneBook);
  }

  return 0;
}
