/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 16:18:33 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/07/10 12:24:14 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "Default constructor called DiamondTrap\n";
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)//, _name(name)
{
	std::cout << "Attributes constructor called DiamondTrap\n";
	_name = name;
	_Energy = ScavTrap::_energy;
	std::cout << "Hit: " << _Hit << "\n";
	std::cout << "Energy: " << _Energy << "\n";
	std::cout << "Attack: " << _Attack << "\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy)
{
	_name = copy._name;
	_Hit = copy._Hit;
	_Energy = copy._Energy;
	_Attack = copy._Attack;
	std::cout << "Copy constructor called DiamondTrap\n";
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
	if(this != &other)
	{
		_name = other._name;
		_Hit = other._Hit;
		_Energy = other._Energy;
		_Attack = other._Attack;
	}
	std::cout << "Copy assignment operator called FragTrap\n";
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Destructor called DiamondTrap\n";
}

void DiamondTrap::attack(const std::string& target)
{
	FragTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	if (_Hit > 0)
	{
		std::cout << "DiamondTrap name is " << _name << "\n";
		std::cout << "ClapTrap name is " << ClapTrap::_name << "\n";
	}
	else
	{
		std::cout << "DiamondTrap name was " << _name << " but now is dead :(\n";
		std::cout << "ClapTrap name was " << ClapTrap::_name << " but now is dead :(\n";
	}
}