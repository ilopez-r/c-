/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 12:06:45 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/07/05 13:21:26 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );

	a = Fixed( 1234.4321f );
	
	std::cout << "a is " << a << "\n";
	std::cout << "b is " << b << "\n";
	std::cout << "c is " << c << "\n";
	std::cout << "d is " << d << "\n";
	
	std::cout << "a is " << a.toInt() << " as integer" << "\n";
	std::cout << "b is " << b.toInt() << " as integer" << "\n";
	std::cout << "c is " << c.toInt() << " as integer" << "\n";
	std::cout << "d is " << d.toInt() << " as integer" << "\n";
	
	return (0);
}
