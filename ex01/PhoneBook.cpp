/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haroldsorel <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 19:12:18 by haroldsorel       #+#    #+#             */
/*   Updated: 2025/01/20 19:12:19 by haroldsorel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){}
PhoneBook::~PhoneBook(){}

void    PhoneBook::add_contact(int index)
{
    this->contacts[index].set_contact(index);
}

void    PhoneBook::get_information(void)
{
    std::string buffer;
    int         index;

    while (1)
    {
        std::cout << "Index of the user you are searching for: ";
        if(!std::getline(std::cin, buffer))
			exit(0);
        std::cout << std::endl;
        try {index = std::stoi(buffer);}
        catch (...)
        {
            std::cout << "Invalid Input! please enter an integer between 1 and 8." << std::endl;
            std::cout << std::endl;
            continue ;
        }
        if (index < 1 || index > 8)
            std::cout << "Index out of bounds! Choose an index between 1 and 8." << std::endl;
        else
            break ;
        std::cout << std::endl;
    }
    index--;
    this->contacts[index].display_information();
}

void    PhoneBook::display_contacts(void)
{
    std::cout << "-----------------CONTACTS------------------" << std::endl;
    std::cout << "     index|first name| last name|  nickname" << std::endl;
    for (int i = 0; i < 8; i++)
    {
        this->contacts[i].display_contact();
    }
     std::cout << "-------------------------------------------" << std::endl;
    std::cout << std::endl;
}
