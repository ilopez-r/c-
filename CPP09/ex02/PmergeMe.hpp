/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 13:36:07 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/10/01 14:30:22 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <list>
#include <climits>


class PmergeMe
{
	private:
			
			 
	public:
			std::vector<int>	_vector;
			std::list<int>	  _list;
			int		_size; 
			PmergeMe();
			PmergeMe(char **av);
			PmergeMe(const PmergeMe &copy);
			~PmergeMe();
			PmergeMe &operator=(const PmergeMe &other);
			template <typename T>
			void	printContainer(typename T::iterator begin, typename T::iterator end)
			{
				for (typename T::iterator it = begin; it != end; it++)
					std::cout << *it << " ";
				std::cout << std::endl;
			}
			void	mergeVector();
			void	mergeList();
};

template <typename T>
void mergeSort(typename T::iterator begin, typename T::iterator end)
{
	if (std::distance(begin, end) < 2)
		return;
	typename T::iterator mid = begin;
	std::advance(mid, std::distance(begin, end) / 2);
	mergeSort<T>(begin, mid);
	mergeSort<T>(mid, end);
	T left(begin, mid);
	T right(mid, end);
	typename T::iterator left_it = left.begin();
	typename T::iterator right_it = right.begin();
	typename T::iterator dest_it = begin;
	while (left_it != left.end() && right_it != right.end())
	{
		if (*left_it < *right_it)
		{
			*dest_it = *left_it;
			++left_it;
		}
		else
		{
			*dest_it = *right_it;
			++right_it;
		}
		++dest_it;
	}
	while (left_it != left.end())
	{
		*dest_it = *left_it;
		++left_it;
		++dest_it;
	}
	while (right_it != right.end())
	{
		*dest_it = *right_it;
		++right_it;
		++dest_it;
	}
}
