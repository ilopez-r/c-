/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 12:51:38 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/06/11 17:19:35 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main (void)
{
    std::string	input;
    Phonebook	agenda;

    while (input != "EXIT")
    {
        std::cout << "Select a command: ADD, SEARCH, EXIT\n";
        std::cout << "> ";
        if (!std::getline(std::cin, input, '\n'))
            return (1);
        if (input == "ADD")
            agenda.new_contact();
        if (input == "SEARCH")
            agenda.search_contact();
    }
    return (0);
}