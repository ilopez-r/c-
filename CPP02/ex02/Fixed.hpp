/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 11:41:06 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/07/05 12:58:14 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int _value;
		static const int _bits = 8;
	public:
		Fixed(void);
		Fixed(const Fixed& copy);
		Fixed(const int i);
		Fixed(const float j);
		Fixed& operator = (const Fixed& other);
		bool operator > (const Fixed& other);
		bool operator < (const Fixed& other);
		bool operator >= (const Fixed& other);
		bool operator <= (const Fixed& other);
		bool operator == (const Fixed& other);
		bool operator != (const Fixed& other);
		Fixed operator + (const Fixed& other);
		Fixed operator - (const Fixed& other);
		Fixed operator * (const Fixed& other);
		Fixed operator / (const Fixed& other);
		Fixed& operator ++ (void);
		Fixed& operator -- (void);
		Fixed operator ++ (int);
		Fixed operator -- (int);
		~Fixed();
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
		static Fixed& min (Fixed& a, Fixed& b);
		static const Fixed& min (const Fixed& a, const Fixed& b);
		static Fixed& max (Fixed& a, Fixed& b);
		static const Fixed& max (const Fixed& a, const Fixed& b);
};

std::ostream& operator << (std::ostream& out, const Fixed& nbr);
