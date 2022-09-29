/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeslall <omeslall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 18:03:10 by omeslall          #+#    #+#             */
/*   Updated: 2022/09/29 17:26:22 by omeslall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PhoneBook.hpp"
#include <fstream>

void    Contact::set_first_name(std::string first_name)
{
    Contact::first_name = first_name;
}

void    Contact::set_last_name(std::string last_name)
{
    Contact::last_name = last_name;
}

void    Contact::set_phone_number(std::string phone_number)
{
    Contact::phone_number = phone_number;
}

void    Contact::set_darkest_secret(std::string darkest_secret)
{
    Contact::darkest_secret = darkest_secret;
}

std::string Contact::get_first_name()
{
    return (Contact::first_name);
}

std::string Contact::get_last_name()
{
	return (Contact::last_name);
}

std::string Contact::get_phone_number()
{
	return (Contact::phone_number);
}

std::string Contact::get_darkest_secret()
{
	return (Contact::darkest_secret);
}

Contact::Contact() : first_name(""), last_name(""), phone_number(""), darkest_secret(""){}

Contact::~Contact(){}

PhoneBook::PhoneBook() : contact_count(0){}

PhoneBook::~PhoneBook(){}

void    PhoneBook::add_contact()
{
	std::string input;
	if(contact_count >= 7)
		contact_count--;
	std::cout << "First name: ";
	std::cin >> input;
	contacts[contact_count].set_first_name(input);
	std::cout << "Last name: ";
	std::cin >> input;
	contacts[contact_count].set_last_name(input);
	std::cout << "Phone number: ";
	std::cin >> input;
	if(!std::all_of(input.begin(), input.end(), ::isdigit))
	{
		std::cout << "Phone number must be a number" << std::endl;
		exit(0);
	}
	contacts[contact_count].set_phone_number(input);
	std::cout << "Darkest secret: ";
	std::cin >> input;
	contacts[contact_count].set_darkest_secret(input);
	contact_count++;
}

int main()
{
	PhoneBook phonebook;
	
    while(1)
    {
        std::string input;
        std::cout << "Enter a command: ";
        std::cin >> input;
        if (input.empty())
        {
            std::clearerr(stdin);
			std::cin.ignore();
			std::cin.clear();
			std::cout << std::endl;
            continue;
        }
        else if (input == "EXIT")
            break;
        else if (input == "ADD")
        {
			phonebook.add_contact();
			
        }
		// else if (input == "SEARCH")
		// {
		// 	std::cout << std::setw(10) << "index" << "|";
		// 	std::cout << std::setw(10) << "first name" << "|";
		// 	std::cout << std::setw(10) << "last name" << "|";
		// 	std::cout << std::setw(10) << "phone number" << std::endl;
		// 	std::cout << std::setw(10) << "0" << "|";
		// 	std::cout << std::setw(10) << contact.get_first_name() << "|";
		// 	std::cout << std::setw(10) << contact.get_last_name() << "|";
		// 	std::cout << std::setw(10) << contact.get_phone_number() << std::endl;
		// 	std::string index;
		// 	std::cout << "Enter index: ";
		// 	std::cin >> index;
		// }
	}
	return (0);
}