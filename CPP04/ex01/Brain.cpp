/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 12:15:46 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/07/11 12:57:47 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain (void)
{
	std::cout << "Default constructor called Brain\n";
}

Brain::Brain(std::string ideas)
{
	std::cout << "Attributes constructor called Brain\n";
	for ( int i = 0; i < 100; i++ )
		_ideas[i] = ideas;
}
Brain::Brain (const Brain& copy)
{
	*this = copy;
	std::cout << "Copy constructor called Brain\n";
}

Brain& Brain::operator=(const Brain& other)
{
	if(this != &other)
		for ( int i = 0; i < 100; i++ )
			_ideas[i] = other._ideas[i];
	std::cout << "Copy assignment operator called Brain\n";
	return (*this);
}

Brain::~Brain (void)
{
	std::cout << "Destructor called Brain\n";
}