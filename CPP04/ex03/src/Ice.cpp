/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 14:55:15 by ilopez-r          #+#    #+#             */
/*   Updated: 2025/02/08 14:55:16 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	/* std::cout << "Ice Default constructor called. Type: " << _type << std::endl; */
}

Ice::Ice(const Ice &copy)
{
	/* std::cout << "Ice Copy constructor called\n"; */
	*this = copy;
}

Ice& Ice::operator=(const Ice &other)
{
	/* std::cout << "Ice operator assignment called.\n"; */
	if (this != &other)
		_type = other._type;
	return (*this);
}

Ice::~Ice()
{
	/* std::cout << "Ice Destructor called\n"; */
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an " << this->getType() << " bolt at " << target.getName() << " *\n";
}

AMateria* Ice::clone() const
{
	return (new Ice());
}