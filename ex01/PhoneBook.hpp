/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeslall <omeslall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 19:36:49 by omeslall          #+#    #+#             */
/*   Updated: 2022/09/28 03:23:23 by omeslall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include <string>
# include <iomanip>
# include <fstream>
# include <cctype>
# include <sstream>
# include <stdio.h>

#include"Contact.hpp"
class PhoneBook
{
    private:
    public:
        Contact		contacts[8];
        int			contact_count;
		PhoneBook();
		~PhoneBook();
		void    add_contact();
		void    search_contact();
};

#endif