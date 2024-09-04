/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 15:32:10 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/09/04 15:45:00 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main ()
{
	std::cout << "ARRAY OF INTS: ";
	int arr1[] = {1, 2, 3};
	int size = sizeof(arr1)/sizeof(arr1[0]);
	iter(arr1, size, functionINT);
	
	std::cout << "ARRAY OF STRINGS: ";
	std::string arr2[] = {"hola", "don", "pepito"};
	size = sizeof(arr2)/sizeof(arr2[0]);
	iter(arr2, size, function<std::string>);
	
	std::cout << "ARRAY OF CHAR: ";
	char arr3[] = {'a', 'b', 'c'};
	size = sizeof(arr3)/sizeof(arr3[0]);
	iter(arr3, size, function<const char>);
}
