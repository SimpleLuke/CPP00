/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llai <llai@student.42london.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 20:34:35 by llai              #+#    #+#             */
/*   Updated: 2024/02/16 00:38:55 by llai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>
#include <string>

std::string upperString(const std::string &str)
{
  std::string result = str;

  for (size_t i = 0; i < result.length(); i++) result[i] = toupper(result[i]);
  return (result);
}

int main(int argc, char **argv)
{
  if (argc == 1)
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
  else
    for (int i = 1; i < argc; i++) std::cout << upperString(argv[i]);
  std::cout << std::endl;
  return (0);
}
