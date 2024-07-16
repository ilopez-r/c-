/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 15:32:58 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/07/11 13:17:25 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat (void):Animal("Cat")
{
	std::cout << "Default constructor called Cat\n";
	_brain = new Brain();
}

Cat::Cat (const Cat& copy)
{
	*this = copy;
	std::cout << "Copy constructor called Cat\n";
}

Cat& Cat::operator=(const Cat& other)
{
	if(this != &other)
	{
		if (_brain)
			delete (_brain);
		_type = other._type;
		_brain = new Brain(*other._brain);
	}
	
	std::cout << "Copy assignment operator called Cat\n";
	return (*this);
}

Cat::~Cat (void)
{
	delete (_brain);
	std::cout << "Destructor called Cat\n";
}

void Cat::makeSound() const
{
	std::cout << "miauuuuuuuuuuu (Cat sound)\n";
}