/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 14:54:55 by ilopez-r          #+#    #+#             */
/*   Updated: 2025/02/08 14:54:58 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	/* std::cout << "Cure Default constructor called. Type: " << _type << std::endl; */
}

Cure::Cure(const Cure &copy)
{
	/* std::cout << "Cure Copy constructor called\n"; */
	*this = copy;
}

Cure& Cure::operator=(const Cure &other)
{
	/* std::cout << "Cure operator assignment called.\n"; */
	if (this != &other)
		_type = other._type;
	return (*this);
}

Cure::~Cure()
{
	/* std::cout << "Cure Destructor called\n"; */
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *\n";
}

AMateria* Cure::clone() const
{
	return (new Cure());
}
