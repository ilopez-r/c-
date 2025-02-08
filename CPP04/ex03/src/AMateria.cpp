/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 14:54:42 by ilopez-r          #+#    #+#             */
/*   Updated: 2025/02/08 14:55:03 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AMateria.hpp"

AMateria::AMateria()
{
	_type = "";
}

AMateria::AMateria(std::string const &type)
{
	_type = type;
}

AMateria::AMateria(AMateria &copy)
{
	/* std::cout << "AMateria copy constructor called" << std::endl; */
	*this = copy;
}

AMateria::~AMateria()
{
	/* std::cout << "AMateria " << _type << " destroyed" << std::endl; */
}

AMateria& AMateria::operator=(AMateria &other)
{
	/* std::cout << "AMateria operator assignment called" << std::endl; */
	if (this != &other)
		_type = other._type;
	return *this;
}

const std::string& AMateria::getType() const
{
	return (_type);
}

void	AMateria::setType(std::string type)
{
	_type = type;
}

void	AMateria::use(ICharacter& target)
{
	(void)target;
	/* std::cout << "AMateria function use()" << std::endl; */
}