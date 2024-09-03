/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 19:05:03 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/09/02 13:08:59 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include "Serializer.hpp"

int main ()
{
	Data src;
	std::cout << "Src:\n   - Memory: " << &src << "\n" << "   - Name: " << src._name << "\n";
	uintptr_t raw = Serializer::serialize(&src);
	Data *dest = Serializer::deserialize(raw);
	std::cout << "Dest:\n   - Memory: " << &dest << "\n" << "   - Name: " << dest->_name << "\n";
}