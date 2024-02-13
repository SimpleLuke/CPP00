/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llai <llai@student.42london.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 20:46:13 by llai              #+#    #+#             */
/*   Updated: 2024/02/13 21:45:55 by llai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/myAwesomePhonebook.hpp"

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
  }

  return 0;
}
