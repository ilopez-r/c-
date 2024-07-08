/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 11:41:04 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/07/05 13:21:26 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	_value = 0;
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed& copy)
{
	_value = copy._value;
	std::cout << "Copy constructor called\n";
}

Fixed::Fixed(const int i)
{
	_value = i << _bits;
	std::cout << "Int constructor called" << "\n";
}

Fixed::Fixed(const float j)
{
	_value = roundf(j * (1 << _bits));
	std::cout << "Float constructor called" << "\n";
}

Fixed& Fixed::operator=(const Fixed& other)
{
	if(this != &other)
		_value = other._value;
	std::cout << "Copy assignment operator called\n";
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return (_value);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called\n";
	_value = raw;
}

float Fixed::toFloat(void) const
{
	return (static_cast<float>(_value) / (1 << _bits));
}

int Fixed::toInt(void) const	
{
	return (_value >> _bits);
}

std::ostream& operator << (std::ostream& out, const Fixed& nbr)
{
	return (out << nbr.toFloat());
}
