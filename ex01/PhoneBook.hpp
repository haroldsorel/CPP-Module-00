/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsorel <hsorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 19:12:28 by haroldsorel       #+#    #+#             */
/*   Updated: 2025/03/07 15:44:34 by hsorel           ###   ########.fr       */
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
