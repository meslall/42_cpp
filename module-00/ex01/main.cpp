/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeslall <omeslall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 18:03:10 by omeslall          #+#    #+#             */
/*   Updated: 2022/12/01 21:51:40 by omeslall         ###   ########.fr       */
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

void    Contact::set_nickname(std::string nickname)
{
	Contact::nickname = nickname;
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

std::string Contact::get_nickname()
{
	return (Contact::nickname);
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
	if(contact_count >= 8)
		contact_count = 0;
	std::cout << "First name: ";
	getline(std::cin , input);
	contacts[contact_count].set_first_name(input);
	std::cout << "Last name: ";
	std::getline(std::cin , input);
	contacts[contact_count].set_last_name(input);
	std::cout << "Nickname: ";
	getline(std::cin , input);
	contacts[contact_count].set_nickname(input);
	std::cout << "Phone number: ";
	std::getline(std::cin , input);
	if(!std::all_of(input.begin(), input.end(), ::isdigit))
	{
		std::cout << "Phone number must be a number" << std::endl;
		contacts[contact_count].set_first_name("");
		contacts[contact_count].set_last_name("");
		contacts[contact_count].set_nickname("");
		contacts[contact_count].set_phone_number("");
		contacts[contact_count].set_darkest_secret("");
		return;
	}
	contacts[contact_count].set_phone_number(input);
	std::cout << "Darkest secret: ";
	std::getline(std::cin , input);
	contacts[contact_count].set_darkest_secret(input);
	if(contacts[contact_count].get_first_name() == "" || contacts[contact_count].get_last_name() == "" || contacts[contact_count].get_nickname() == "" || contacts[contact_count].get_phone_number() == "" || contacts[contact_count].get_darkest_secret() == "")
	{
		std::cout << "You must fill fields" << std::endl;
		contacts[contact_count].set_first_name("");
		contacts[contact_count].set_last_name("");
		contacts[contact_count].set_nickname("");
		contacts[contact_count].set_phone_number("");
		contacts[contact_count].set_darkest_secret("");
		return;
	}
	contact_count++;
}

void    PhoneBook::search_contact()
{
	std::string input;
	int index;
	if(contact_count == 0)
	{
		std::cout << "No contacts to search" << std::endl;
		return ;
	}
	std::cout << "     Index|First Name|Last  Name|Nickname" << std::endl;
	for(int i = 0; !contacts[i].get_first_name().empty(); i++)
	{
		std::cout << "         " << i << "|";
		if(contacts[i].get_first_name().length() > 10)
			std::cout << contacts[i].get_first_name().substr(0, 9) << "." << "|";
		else
			std::cout << std::setw(10) << contacts[i].get_first_name() << "|";
		if(contacts[i].get_last_name().length() > 10)
			std::cout << contacts[i].get_last_name().substr(0, 9) << "." << "|";
		else
			std::cout << std::setw(10) << contacts[i].get_last_name() << "|";
		if(contacts[i].get_phone_number().length() > 10)
			std::cout << contacts[i].get_nickname().substr(0, 9) << "." << "|";
		else
			std::cout << std::setw(10) << contacts[i].get_nickname() << "|";
		std::cout << std::endl;
	}
	std::cout << "Enter index: ";
	std::getline(std::cin , input);
	if(!std::all_of(input.begin(), input.end(), ::isdigit) || input.empty())
	{
		std::cout << "Index must be a number" << std::endl;
		return ;
	}
	index = std::stoi(input);
	if(index < 0 || index >= contact_count)
	{
		std::cout << "Index out of range" << std::endl;
		return ;
	}
	std::cout << "First name: " << contacts[index].get_first_name() << std::endl;
	std::cout << "Last name: " << contacts[index].get_last_name() << std::endl;
	std::cout << "Phone number: " << contacts[index].get_phone_number() << std::endl;
	std::cout << "Darkest secret: " << contacts[index].get_darkest_secret() << std::endl;
}

int main()
{
	PhoneBook phonebook;
	
    while(1)
    {
        std::string input;
        std::cout << "Enter a command: ";
        getline(std::cin , input);
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
			phonebook.add_contact();
		else if (input == "SEARCH")
			phonebook.search_contact();
		else
			std::cout << "Invalid command" << std::endl;
	}
	return (0);
}