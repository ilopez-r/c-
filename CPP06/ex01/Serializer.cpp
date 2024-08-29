/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 18:48:57 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/08/29 18:58:54 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{
	//std::cout << "Default constructor called\n";
}

Serializer::Serializer(const Serializer& copy)
{
	if (this != &copy)
		*this = copy;
	//std::cout << "Copy constructor called\n";
}

Serializer& Serializer::operator=(const Serializer& other)
{
	(void)other;
	//std::cout << "Copy assignment operator called\n";
	return (*this);
}

Serializer::~Serializer()
{
	//std::cout << "Destructor called\n";
}

uintptr_t Serializer::serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(&ptr));
}

Data* Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}