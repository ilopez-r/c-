/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 13:11:55 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/07/05 13:21:26 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void) 
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	
	std::cout << a << "\n";
	std::cout << ++a << "\n";
	std::cout << a << "\n";
	std::cout << a++ << "\n";
	std::cout << a << "\n";
	
	std::cout << b << "\n";
	
	std::cout << Fixed::max( a, b ) << "\n";

	
	return (0);
}