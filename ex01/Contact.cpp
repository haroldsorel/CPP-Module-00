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

void display_line(std::string str, int flag)
{
    if (str.length() > 10)
    {
        str = str.substr(0, 9) + ".";
    }
    
    std::cout << std::setw(10) << std::right << str;
    
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

    this->index = index + + 1 + 48;

    while (buffer == "")
    {
        std::cout << "Enter a first name: ";
        std::getline(std::cin, buffer);
        this->first_name = buffer;
    }
    buffer.clear();
    while (buffer == "")
    {
        std::cout << "Enter a last name: ";
        std::getline(std::cin, buffer);
        this->last_name = buffer;
    }
    buffer.clear();
    while (buffer == "")
    {
        std::cout << "Enter a nickname: ";
        std::getline(std::cin, buffer);
        this->nickname = buffer;
    }
    buffer.clear();
    while (buffer == "")
    {
        std::cout << "Enter a phone number: ";
        std::getline(std::cin, buffer);
        this->phone_number = buffer;
    }
    buffer.clear();
    while (buffer == "")
    {
        std::cout << "Enter a dark secret: ";
        std::getline(std::cin, buffer);
        this->dark_secret = buffer;
    }
}
