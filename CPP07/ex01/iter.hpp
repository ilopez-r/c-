/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 15:32:07 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/09/04 15:45:05 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template <typename T>
void function(T &a)
{
	std::cout << a << " ";
}

void functionINT(int i)
{
	std::cout << i << " ";
}

template <typename T, typename Q>
void iter(T *a, int length, Q f)
{
	int j = 0;
	while (j < length)
	{
		f(a[j]);
		j++;
	}
	std::cout << "\n";
}