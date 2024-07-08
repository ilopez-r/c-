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
	//std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed& copy)
{
	_value = copy._value;
	//std::cout << "Copy constructor called\n";
}

Fixed::Fixed(const int i)
{
	_value = i << _bits;
	//std::cout << "Int constructor called" << "\n";
}

Fixed::Fixed(const float j)
{
	_value = roundf(j * (1 << _bits));
	//std::cout << "Float constructor called" << "\n";
}

Fixed& Fixed::operator=(const Fixed& other)
{
	if(this != &other)
		this->_value = other._value;
	//std::cout << "Copy assignment operator called\n";
	return (*this);
}

bool Fixed::operator > (const Fixed& other)
{
	if (this->_value > other._value)
		return (true);
	return (false);
}

bool Fixed::operator < (const Fixed& other)
{
	if (this->_value < other._value)
		return (true);
	return (false);
}

bool Fixed::operator >= (const Fixed& other)
{
	if (this->_value >= other._value)
		return (true);
	return (false);
}

bool Fixed::operator <= (const Fixed& other)
{
	if (this->_value <= other._value)
			return (true);
		return (false);
}

bool Fixed::operator == (const Fixed& other)
{
	if (this->_value == other._value)
			return (true);
		return (false);
}

bool Fixed::operator != (const Fixed& other)
{
	if (this->_value != other._value)
			return (true);
		return (false);
}

Fixed Fixed::operator + (const Fixed& other)
{
	Fixed a;

	a._value = this->_value + other._value;
	
	return (a);
}

Fixed Fixed::operator - (const Fixed& other)
{
	Fixed a;

	a._value = this->_value - other._value;
	
	return (a);
}

Fixed Fixed::operator * (const Fixed& other)
{
	Fixed a;

	a = this->toFloat() * other.toFloat();
	
	return (a);
}

Fixed Fixed::operator / (const Fixed& other)
{
	Fixed a;

	a = this->toFloat() / other.toFloat();
	
	return (a);
}

Fixed& Fixed::operator ++ (void)
{
	this->_value++;
	return (*this);
}

Fixed& Fixed::operator -- (void)
{
	this->_value--;
	return (*this);
}

Fixed Fixed::operator ++ (int)
{
	Fixed a;

	a._value = this->_value;
	this->_value++;
	return (a);
}

Fixed Fixed::operator -- (int)
{
	Fixed a;

	a._value = this->_value;
	this->_value--;
	return (a);
}

Fixed::~Fixed()
{
	//std::cout << "Destructor called\n";
}

int Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called\n";
	return (_value);
}

void Fixed::setRawBits(int const raw)
{
	//std::cout << "setRawBits member function called\n";
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

Fixed& Fixed::min (Fixed& a, Fixed& b)
{
	if (a < b)
		return (a);
	return (b);
}

const Fixed& Fixed::min (const Fixed& a, const Fixed& b)
{
	if (a._value < b._value)
		return (a);
	return (b);
}

 Fixed& Fixed::max (Fixed& a, Fixed& b)
{
	if (a > b)
		return (a);
	return (b);
}

const Fixed& Fixed::max (const Fixed& a, const Fixed& b)
{
	if (a._value > b._value)
		return (a);
	return (b);
}

std::ostream& operator << (std::ostream& out, const Fixed& nbr)
{
	return (out << nbr.toFloat());
}
