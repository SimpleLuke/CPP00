/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llai <llai@student.42london.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 20:46:13 by llai              #+#    #+#             */
/*   Updated: 2024/02/16 00:40:59 by llai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "../includes/phoneBook.class.hpp"

int main(void)
{
  PhoneBook phoneBook;
  std::string command;

  while (true)
  {
    std::cout << "===============================" << std::endl;
    std::cout << "Welcome to My Awesome PhoneBook" << std::endl;
    std::cout << "(Enter commands: ADD, SEARCH or EXIT)" << std::endl;
    std::getline(std::cin, command);
    if (command == "EXIT") break;
    if (command == "ADD") phoneBook.addNewContact();
    if (command == "SEARCH") phoneBook.showContacts();
  }

  return 0;
}
