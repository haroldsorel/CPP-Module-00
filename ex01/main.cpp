/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsorel <hsorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 19:12:35 by haroldsorel       #+#    #+#             */
/*   Updated: 2025/03/07 15:44:36 by hsorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int main()
{
    std::string user_input;
    PhoneBook   phone_book;
    int         index;

    index = 0;
    while (1)
    {
        std::cout << "Would you like to ADD, SEARCH or EXIT: ";
        if(!std::getline(std::cin, user_input))
			return (0);
        std::cout << std::endl;

        if (user_input == "ADD" || user_input == "add")
        {
            phone_book.add_contact(index);
            std::cout << "User added!" << std::endl;
            index++;
        }
        else if (user_input == "SEARCH" || user_input == "search")
        {
            phone_book.display_contacts();
            phone_book.get_information();
        }
        else if (user_input == "EXIT" || user_input == "exit")
        {
            std::cout << "Exit!" << std::endl;
            return (0);
        }
        else
            std::cout << "Wrong Command" << std::endl;
        if (index > 7)
            index = 0;
        std::cout << std::endl;
    }
    return (0);
}
