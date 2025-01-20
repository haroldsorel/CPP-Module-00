/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haroldsorel <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 19:12:53 by haroldsorel       #+#    #+#             */
/*   Updated: 2025/01/20 19:12:54 by haroldsorel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int argc, char **argv)
{
    std::string str;

    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    for (int i = 1; i < argc; i++)
    {
        str = argv[i];
        for (size_t j = 0; j < str.length(); j++)
            std::putchar(std::toupper(str[j]));
        if (i < argc - 1)
            std::putchar(' ');
    }
    std::putchar('\n');
    return (0);
}
