/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 15:17:13 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/07/10 11:24:16 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "Default constructor called ScavTrap\n";
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	std::cout << "Attributes constructor called ScavTrap\n";
	_Hit = 100;
	_Energy = 50;
	_Attack = 20;
}

ScavTrap::ScavTrap(const ScavTrap& copy)
{
	_name = copy._name;
	_Hit = copy._Hit;
	_Energy = copy._Energy;
	_Attack = copy._Attack;
	std::cout << "Copy constructor called ScavTrap\n";
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	if(this != &other)
	{
		_name = other._name;
		_Hit = other._Hit;
		_Energy = other._Energy;
		_Attack = other._Attack;
	}
	std::cout << "Copy assignment operator called ScavTrap\n";
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor called ScavTrap\n";
}

void ScavTrap::attack(const std::string& target)
{
	if (_Energy > 0 && _Hit > 0)
	{
		std::cout << "ScavTrap " << _name << " attacks " << target << " causing " << _Attack << " points of damage!" << "\n";
		_Energy--;
		std::cout << "  ~ Energy points left: " << _Energy << "\n";
	}
	else if (_Hit <= 0)
			std::cout << "ScavTrap " << _name << " is already dead!" << "\n";
	else if (_Energy <= 0)
		std::cout << "ScavTrap " << _name << " has not enough energy to attack!" << "\n";
}

void ScavTrap::guardGate(void)
{
	if (_Energy > 0 && _Hit > 0)
	{
		std::cout << "ScavTrap " << _name << " is now in Gate keeper mode\n";
		_Energy--;
		std::cout << "  ~ Energy points left: " << _Energy << "\n";
	}
	else if (_Hit <= 0)
			std::cout << "ScavTrap " << _name << " is already dead!" << "\n";
	else if (_Energy <= 0)
		std::cout << "ScavTrap " << _name << " has not enough energy to attack!" << "\n";
}
