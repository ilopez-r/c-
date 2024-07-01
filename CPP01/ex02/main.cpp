/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 14:48:51 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/07/01 14:59:19 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string hi = "HI THIS IS BRAIN";
	std::string *stringPTR = &hi;
	std::string &stringREF = hi;

	std::cout << "Memory 1: " << &hi << "\n";
	std::cout << "Memory 2: " << stringPTR << "\n";
	std::cout << "Memory 3: " << &stringREF << "\n\n";

	std::cout << "Value 1: " << hi << "\n";
	std::cout << "Value 2: " << *stringPTR << "\n";
	std::cout << "Value 3: " << stringREF << "\n";
}
