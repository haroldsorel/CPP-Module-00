/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haroldsorel <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 19:12:28 by haroldsorel       #+#    #+#             */
/*   Updated: 2025/01/20 19:12:29 by haroldsorel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream> 
# include "Contact.hpp" 

class PhoneBook
{
    private:
        Contact contacts[8];
        int     index;
    
    public:
        PhoneBook();
        ~PhoneBook();
        void    add_contact(int index);
        void    display_contacts();
        void    get_information(void);
};

#endif
