/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 15:33:02 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/07/11 13:17:12 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog (void):Animal("Dog")
{
	std::cout << "Default constructor called Dog\n";
	_brain = new Brain();
}

Dog::Dog (const Dog& copy)
{
	*this = copy;
	std::cout << "Copy constructor called Dog\n";
}

Dog& Dog::operator=(const Dog& other)
{
	if(this != &other)
	{
		if (_brain)
			delete (_brain);
		_type = other._type;
		_brain = new Brain(*other._brain);
	}
	std::cout << "Copy assignment operator called Dog\n";
	return (*this);
}

Dog::~Dog (void)
{
	delete (_brain);
	std::cout << "Destructor called Dog\n";
}

void Dog::makeSound() const
{
	std::cout << "guauuuuuuuuuuu (Dog sound)\n";
}