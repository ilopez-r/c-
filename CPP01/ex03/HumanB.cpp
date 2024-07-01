/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 15:05:14 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/07/01 16:54:12 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->_arma = NULL;
}

HumanB::~HumanB(void)
{
	std::cout << this->name << " has died\n";
}
void HumanB::attack(void)
{
	if (this->_arma != NULL)
		std::cout << this->name << ":" << "  attacks with their " << this->_arma->getType() << "\n";
}

void HumanB::setWeapon(Weapon &arma)
{
	this->_arma = &arma;
}