/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 16:19:25 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/09/04 19:21:08 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>

int main ()
{
	std::cout << "VECTOR CONTAINER: ";
	int numbers[] = {1, 35, 3, 4, 5};
	int size = sizeof(numbers) / sizeof(numbers[0]);
	std::vector<int> vector(numbers, numbers + size);
	vector.push_back(6);
	for (std::vector<int>::iterator it = vector.begin(); it != vector.end(); ++it)
        std::cout << *it << " ";
    std::cout << "\n";
	easyfind(vector, 3);
	easyfind(vector, 6);
	easyfind(vector, 7);
	std::cout << "\n";

	std::cout << "LIST CONTAINER: ";
	size = sizeof(numbers) / sizeof(numbers[0]);
	std::list<int> list(numbers, numbers + size);
	list.push_front(0);
	list.push_back(6);
	for (std::list<int>::iterator it = list.begin(); it != list.end(); ++it)
        std::cout << *it << " ";
    std::cout << "\n";
	easyfind(list, 0);
	easyfind(list, 3);
	easyfind(vector, 6);
	easyfind(vector, 7);
	std::cout << "\n";

	std::cout << "EMPTY VECTOR CONTAINER: \n";
	std::vector<int> veector;
	easyfind(veector, 4);
}