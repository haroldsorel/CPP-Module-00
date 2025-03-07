/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsorel <hsorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 19:12:07 by haroldsorel       #+#    #+#             */
/*   Updated: 2025/03/07 15:44:37 by hsorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Contact
{
    private :
            std::string index;
            std::string first_name;
            std::string last_name;
            std::string nickname;
            std::string phone_number;
            std::string dark_secret;
    public :
            Contact(void);
            ~Contact(void);
            void    set_contact(int index);
            void    display_contact();
            void    display_information();
};
#endif
