/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:46:50 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/06/12 17:23:40 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook()
{
	this->index = 0;
}

Phonebook::~Phonebook()
{
	std::cout << "\nPHONEBOOK OFF\n";
	std::cout << "\n";
}

void Phonebook::new_contact()
{
	std::string	first;
	std::string	last;
	std::string	nick;
	std::string	phone;
	std::string	secret;

	std::cout << "\n";
	while (first.empty ()) 
	{
		std::cout << "Add first name: ";
		if (!std::getline(std::cin, first, '\n'))
     		return ;
		for (size_t j = 0; j < first.length(); j++)
		{
			if (first[0] == 32 || (first[j] == 32 && (first[j + 1] == 32 || first[j + 1] == '\0')))
			{
				first = "";
				break;
			}
			if (first[j] != 32 && (first[j] < 65 || first[j] > 90) && (first[j] < 97 || first[j] > 122))
			{
				first = "";
				break;
			}
		}
	}
	while (last.empty ()) 
	{
		std::cout << "Add last name: ";
		if (!std::getline(std::cin, last, '\n'))
     		return ;
		for (size_t j = 0; j < last.length(); j++)
		{
			if (last[0] == 32 || (last[j] == 32 && (last[j + 1] == 32 || last[j + 1] == '\0')))
			{
				last = "";
				break;
			}
			if (last[j] != 32 && (last[j] < 65 || last[j] > 90) && (last[j] < 97 || last[j] > 122))
			{
				last = "";
				break;
			}
		}
	}
	while (nick.empty ()) 
	{
		std::cout << "Add nickname: ";
		if (!std::getline(std::cin, nick, '\n'))
     		return ;
	}
	while (phone.empty ()) 
	{
		std::cout << "Add phone number: ";
		if (!std::getline(std::cin, phone, '\n'))
     		return ;
		for (size_t j = 0; j < phone.length(); j++)
		{
			if (phone[j] < 48 || phone[j] > 57)
			{
				phone = "";
				break;
			}
		}
	}
	while (secret.empty ()) 
	{
		std::cout << "Add darkest secret: ";
		if (!std::getline(std::cin, secret, '\n'))
     		return ;
	}
	std::cout << "\n";
	this->contacts[this->index % 8] = Contact(first, last, nick, phone, secret);
	this->index++;
	
}

void Phonebook::search_contact()
{
	int	index;
	std::string	input;
	int j = 0;

	if (this->index == 0)
	{
		std::cout << "EMPTY PHONEBOOK\n";
		std::cout << "\n";
		return ;
	}
	if (this->index > 7)
		index = 8;
	else
		index = this->index % 8;
	std::cout << " ___________________________________________\n";
	std::cout << "|          |          |          |          |\n";
	std::cout << "|     INDEX|      NAME| LAST NAME|  NICKNAME|\n";
	std::cout << "|__________|__________|__________|__________|\n";
	for (int i = 0; i < index; i++)
	{
		std::cout << "|          |          |          |          |\n";
		std::cout << "|         " << i + 1 << "|";
		this->contacts[i].print_str(1);
		this->contacts[i].print_str(2);
		this->contacts[i].print_str(3);
		std::cout << "\n";
		std::cout << "|__________|__________|__________|__________|\n";
	}
	std::cout << "\n";
	while (69)
	{
		std::cout << "\nSelect a contact to expand: ";
		if (!std::getline(std::cin, input, '\n'))
     		return ;
		while (input[j] == '\0')
		{
			std::cout << "NOT A CONTACT\n";
			std::cout << "\nSelect a contact to expand: ";
			input = "";
			if (!std::getline(std::cin, input, '\n'))
     			return ;
		}
		while (input[j] != '\0')
		{
			if (input[j] < 48 || input[j] > 57)
			{
				std::cout << "NOT A CONTACT\n";
				std::cout << "\nSelect a contact to expand: ";
				input = "";
				if (!std::getline(std::cin, input, '\n'))
     				return ;
			}
			j++;
		}
		if (input[0] != '\0')
		{
			j = 0;
			j = std::atoi(input.c_str());
			if (j >= 1 && j <= 8 && j <= this->index)
			{
				this->contacts[j - 1].show_contact();
				break ;
			}
			else
			{
				std::cout << "INVALID CONTACT\n";
				input = "";
				j = 0;
			}
		}
	}
}
	
