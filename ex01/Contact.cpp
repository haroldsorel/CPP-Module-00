/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haroldsorel <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 19:11:57 by haroldsorel       #+#    #+#             */
/*   Updated: 2025/01/20 19:12:01 by haroldsorel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Contact.hpp"

Contact::Contact(){}
Contact::~Contact(){}

void    display_line(std::string str, int flag)
{
    int len;

    len = str.length();
    if (len > 10)
    {
        str[9] = '.';
        for (int j = 10; j < len; j++)
            str[j] = '\0';
    }
    for (int i = 0; i < 10 - len; i++)
        std::cout << " ";
    std::cout << str;
    if (flag == 1)
        std::cout << "|";
}

void    Contact::display_information(void)
{
    if (this->index == "")
    {
        std::cout << "No contacts with this index were added!" << std::endl;
        return ;
    }
    std::cout << this->phone_number << std::endl;
    std::cout << this->dark_secret << std::endl;
}

void    Contact::display_contact(void)
{
    if (this->index == "")
        return ;
    display_line(this->index, 1);
    display_line(this->first_name, 1);
    display_line(this->last_name, 1);
    display_line(this->nickname, 0);
    std::cout << std::endl; 
}

void    Contact::set_contact(int index)
{
    std::string buffer;

    this->index = index + 48;

    std::cout << "Enter a first name: ";
    std::getline(std::cin, buffer);
    this->first_name = buffer;

    std::cout << "Enter a last name: ";
    std::getline(std::cin, buffer);
    this->last_name = buffer;

    std::cout << "Enter a nickname: ";
    std::getline(std::cin, buffer);
    this->nickname = buffer;

    std::cout << "Enter a phone number: ";
    std::getline(std::cin, buffer);
    this->phone_number = buffer;

    std::cout << "Enter a dark secret: ";
    std::getline(std::cin, buffer);
    this->dark_secret = buffer;
}
