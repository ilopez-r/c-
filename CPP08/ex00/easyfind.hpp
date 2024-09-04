/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 16:19:17 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/09/04 17:56:21 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>

template <typename T>
void easyfind(T container, int i)
{
	typename T::iterator j = std::find(container.begin(), container.end(), i);
	if (j != container.end())
		std::cout << "Number " << *j << " found in container\n";
	else
		std::cout << "Number " << i << " not found in container\n";
}