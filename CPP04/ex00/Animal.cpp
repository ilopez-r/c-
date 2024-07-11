/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 15:25:36 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/07/11 13:31:18 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal (void)
{
	std::cout << "Default constructor called Animal\n";
}

Animal::Animal(std::string type)
{
	std::cout << "Attributes constructor called Animal\n";
	_type = type;
}
Animal::Animal (const Animal& copy)
{
	*this = copy;
	std::cout << "Copy constructor called Animal\n";
}

Animal& Animal::operator=(const Animal& other)
{
	if(this != &other)
		_type = other._type;
	std::cout << "Copy assignment operator called Animal\n";
	return (*this);
}

Animal::~Animal (void)
{
	std::cout << "Destructor called Animal\n";
}

void Animal::makeSound() const
{
	std::cout << "ñññññ (Default animal sound)\n";
}

std::string Animal::getType(void) const
{
	return (_type);
}