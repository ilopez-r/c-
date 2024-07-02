/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 11:56:08 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/07/02 12:13:55 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl harl;
	
	if (argc != 2)
	{
		std::cout << "Wrong number of arguments\n";
		return (1);
	}
	harl.complain(argv[1]);
	return (0);
}
