/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 15:05:14 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/07/01 16:41:24 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &arma) : _arma(arma) 
{
	this->name = name;
}

HumanA::~HumanA(void)
{
	std::cout << this->name << " has died\n";
}

void HumanA::attack(void)
{
	std::cout << this->name << ":" << "  attacks with their " << this->_arma.getType() << "\n";
}