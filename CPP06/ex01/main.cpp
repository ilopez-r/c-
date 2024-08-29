/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 19:05:03 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/08/29 19:58:39 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include "Serializer.hpp"

int main ()
{
	Data src;
	std::cout << &src << "\n";
	uintptr_t raw = Serializer::serialize(&src);
	std::cout << raw << "\n";
	Data *dest = Serializer::deserialize(raw);
	std::cout << &dest << "\n";
}