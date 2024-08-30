/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 15:32:07 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/08/30 16:14:18 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template <typename T>
void function(T &a, int i, int j)
{
	std::cout << a;
	if (j != i - 1)
		std:: cout << ", ";
}

template <typename T>
void iter(T *a, int i, void (*f)(T &c, int i, int j))
{
	int j = 0;
	while (j < i)
	{
		f(a[j], i, j);
		j++;
	}
	std::cout << "\n";
}