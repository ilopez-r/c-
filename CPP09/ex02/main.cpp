/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 19:36:47 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/10/01 17:19:39 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <ctime>

int main(int argc, char* argv[]) 
{
	if (argc < 2) {
		std::cerr << "Usage: " << argv[0] << " num1 num2 num3 ..." << std::endl;
		return 1;
	}
	try
	{
		PmergeMe pm(argv);

		std::cout << "Before: ";
		pm.printContainer<std::vector<int> >(pm._vector.begin(), pm._vector.end());
		std::cout << std::endl;

		std::clock_t start_vector = std::clock();
		pm.mergeVector();
		std::clock_t end_vector = std::clock();
		double elapsed_vector = double(end_vector - start_vector) / CLOCKS_PER_SEC * 1000;

		std::cout << "After Vector: ";
		pm.printContainer<std::vector<int> >(pm._vector.begin(), pm._vector.end());
		std::cout << std::endl;

		std::clock_t start_list = std::clock();
		pm.mergeList();
		std::clock_t end_list = std::clock();
		double elapsed_list = double(end_list - start_list) / CLOCKS_PER_SEC * 1000;

		std::cout << "After List: ";
		pm.printContainer<std::list<int> >(pm._list.begin(), pm._list.end());
		std::cout << std::endl;
		
		std::cout << "Time to process a range of " << pm._size << " elements with std::vector : " << elapsed_vector << " us" << std::endl;
		std::cout << "Time to process a range of " << pm._size << " elements with std::list : " << elapsed_list << " us" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}