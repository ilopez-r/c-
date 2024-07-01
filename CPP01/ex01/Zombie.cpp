/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 13:19:44 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/07/01 14:37:04 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	this->name = "Default";
}

Zombie::Zombie(std::string name)
{
	this->name = name;
}

Zombie::~Zombie(void)
{
	std::cout << this->name << " has died\n";
}
void Zombie::announce(void)
{
	std::cout << this->name << ":" << " BraiiiiiiinnnzzzZ...\n";
}

void Zombie::set_name(std::string name)
{
	this->name = name;
}
