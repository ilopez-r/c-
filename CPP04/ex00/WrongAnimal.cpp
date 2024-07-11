/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 16:18:54 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/07/11 13:31:36 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal (void)
{
	std::cout << "Default constructor called WrongAnimal\n";
}

WrongAnimal::WrongAnimal(std::string type)
{
	std::cout << "Attributes constructor called WrongAnimal\n";
	_type = type;
}
WrongAnimal::WrongAnimal (const WrongAnimal& copy)
{
	*this = copy;
	std::cout << "Copy constructor called WrongAnimal\n";
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
	if(this != &other)
		_type = other._type;
	std::cout << "Copy assignment operator called WrongAnimal\n";
	return (*this);
}

WrongAnimal::~WrongAnimal (void)
{
	std::cout << "Destructor called WrongAnimal\n";
}

void WrongAnimal::makeSound() const
{
	std::cout << "ñññññ (Default animal sound)\n";
}

std::string WrongAnimal::getType(void) const
{
	return (_type);
}
