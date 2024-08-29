/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 19:11:58 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/08/29 19:58:16 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data()
{
	_name = "Default";
	//std::cout << "Default constructor called\n";
}

Data::Data(const Data& copy)
{
	if (this != &copy)
		*this = copy;
	//std::cout << "Copy constructor called\n";
}

Data& Data::operator=(const Data& other)
{
	(void)other;
	//std::cout << "Copy assignment operator called\n";
	return (*this);
}

Data::~Data()
{
	//std::cout << "Destructor called\n";
}