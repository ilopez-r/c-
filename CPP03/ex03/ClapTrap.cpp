/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 12:13:49 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/07/10 11:24:35 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called\n";
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Attributes constructor called\n";
	_name = name;
	_Hit = 10;
	_Energy = 10;
	_Attack = 0;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
	_name = copy._name;
	_Hit = copy._Hit;
	_Energy = copy._Energy;
	_Attack = copy._Attack;
	std::cout << "Copy constructor called\n";
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	if(this != &other)
	{
		_name = other._name;
		_Hit = other._Hit;
		_Energy = other._Energy;
		_Attack = other._Attack;
	}
	std::cout << "Copy assignment operator called\n";
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called\n";
}

void ClapTrap::attack(const std::string& target)
{
	if (_Energy > 0 && _Hit > 0)
	{
		std::cout << "ClapTrap " << _name << " attacks " << target << " causing " << _Attack << " points of damage!" << "\n";
		_Energy--;
		std::cout << "  ~ Energy points left: " << _Energy << "\n";
	}
	else if (_Hit <= 0)
			std::cout << "ClapTrap " << _name << " is already dead!" << "\n";
	else if (_Energy <= 0)
		std::cout << "ClapTrap " << _name << " has not enough energy to attack!" << "\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_Hit > 0)
	{
		std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << "\n";
		_Hit = _Hit - amount;
		if (_Hit <= 0)
		{
			std::cout << "  ~ Hit points left: 0\n";
			std::cout << "ClapTrap " << _name << " is dead!" << "\n";
		}
		if (_Hit > 0)
			std::cout << "  ~ Hit points left: " << _Hit << "\n";	
	}
	else if (_Hit <= 0)
			std::cout << "ClapTrap " << _name << " is already dead!" << "\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_Energy > 0 && _Hit > 0)
	{
		std::cout << "ClapTrap " << _name << " repairs itself and gets " << amount << " hit points back!" << "\n";
		_Hit = _Hit + amount;
		std::cout << "  ~ Hit points left: " << _Hit << "\n";
		_Energy--;
		std::cout << "  ~ Energy points left: " << _Energy << "\n";
	}
	else if (_Hit <= 0)
			std::cout << "ClapTrap " << _name << " is already dead!" << "\n";
	else if (_Energy <= 0)
		std::cout << "ClapTrap " << _name << " has not enough energy to repair itself!" << "\n";
}
