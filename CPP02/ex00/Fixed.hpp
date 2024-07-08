/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 11:41:06 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/07/05 12:06:39 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>

class Fixed
{
	private:
		int _value;
		static const int _bits = 8;
	public:
		Fixed(void);
		Fixed (const Fixed& copy);
		Fixed& operator=(const Fixed& other);
		~Fixed();
	
	int getRawBits(void) const;
	void setRawBits(int const raw);
};
