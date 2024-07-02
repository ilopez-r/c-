/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 10:57:07 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/07/02 12:24:35 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	functions[0] = &Harl::debug;
	functions[1] = &Harl::info;
	functions[2] = &Harl::warning;
	functions[3] = &Harl::error;
	level[0] = "DEBUG";
	level[1] = "INFO";
	level[2] = "WARNING";
	level[3] = "ERROR";
}

Harl::~Harl(void)
{
	std::cout << "Harl has died.\n";
}

void Harl::debug(void)
{
	std::cout << "DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n\n";
}

void Harl::info(void)
{
	std::cout << "INFO: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n\n";
}

void Harl::warning(void)
{
	std::cout << "WARNING: I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n\n";
}

void Harl::error(void)
{
	std::cout << "ERROR: This is unacceptable! I want to speak to the manager now.\n\n";
}

void Harl::complain(std::string level)
{
	int i = 0;
	
	while (i < 4)
	{
		if (this->level[i] == level)
			break;
		i++;
	}
	switch (i)
	{
	case 0:
		(this->*functions[0])();
	case 1:
		(this->*functions[1])();
	case 2:
		(this->*functions[2])();
	case 3:
		(this->*functions[3])();
		break;
	default:
		std::cout << "Probably complaining about insignificant problems\n\n";
		break;
	}
}

/*void Harl::complain(std::string level)
{
	int i = 0;
	
	while (i < 4)
	{
		if (this->level[i] == level)
		{
			while (i < 4)
			{
				(this->*functions[i])();
				i++;
			}
			return ;
		}
		i++;
	}
	std::cout << "Probably complaining about insignificant problems\n\n";
	return ;
}*/