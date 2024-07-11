/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 16:18:59 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/07/11 13:31:42 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat (void):WrongAnimal("WrongCat")
{
	std::cout << "Default constructor called WrongCat\n";
}

WrongCat::WrongCat (const WrongCat& copy)
{
	*this = copy;
	std::cout << "Copy constructor called WrongCat\n";
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
	if(this != &other)
		_type = other._type;
	std::cout << "Copy assignment operator called WrongCat\n";
	return (*this);
}

WrongCat::~WrongCat (void)
{
	std::cout << "Destructor called WrongCat\n";
}

void WrongCat::makeSound() const
{
	std::cout << "miauuuuuuuuuuu (WrongCat sound)\n";
}
