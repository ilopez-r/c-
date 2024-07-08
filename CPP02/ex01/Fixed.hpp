/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 11:41:06 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/07/05 12:07:08 by ilopez-r         ###   ########.fr       */
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
		Fixed& operator=(const Fixed& other);
		~Fixed();
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;		
};

std::ostream& operator << (std::ostream& out, const Fixed& nbr);
