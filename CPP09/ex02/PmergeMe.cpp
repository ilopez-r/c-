/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 17:40:07 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/10/01 14:25:22 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
	_size = 0;
}

PmergeMe::PmergeMe(char **argv)
{
	_size = 0;
    int value = 0;
    for (int i = 1; argv[i]; i++)
    {
        value = std::atoi(argv[i]);
        if(value < 0)
            throw std::invalid_argument("Error: Negative values are not allowed");
        if(std::find(_vector.begin(), _vector.end(), value) == _vector.end() && value >= 0)
		{
            _vector.push_back(value);
            _list.push_back(value);
            _size++;
        }
    }
}

PmergeMe::PmergeMe(const PmergeMe &copy)
{
	_vector = copy._vector;
	_list = copy._list;
	_size = copy._size;
}

PmergeMe::~PmergeMe()
{
	
}

PmergeMe &PmergeMe::operator=(const PmergeMe &other)
{
    if(this != &other)
	{
        _vector = other._vector;
        _list = other._list;
        _size = other._size;
    }
    return *this;
}

template <typename T>
static void binaryInsert(T &container, int value)
{
	typename T::iterator it = std::lower_bound(container.begin(), container.end(), value);
	container.insert(it, value);
}

void	PmergeMe::mergeVector()
{
	if(_size <= 1)
		return;
	std::vector<std::pair<int, int> > pairs;
	for (std::vector<int>::iterator it = _vector.begin(); it != _vector.end(); it++)
	{
		std::vector<int>::iterator next_it = it;
		next_it++;
		if (next_it != _vector.end())
		{
			if (*it > *next_it)
                pairs.push_back(std::make_pair(*next_it, *it));
            else
                pairs.push_back(std::make_pair(*it, *next_it));
		}
		else
		{
			pairs.push_back(std::make_pair(*it, INT_MAX));
			break;
		}
		it = next_it;
	}
	std::vector<int> newVector;
	for(std::vector<std::pair<int, int> >::iterator it = pairs.begin(); it != pairs.end(); it++)
	{
		newVector.push_back(it->first);
	}
	mergeSort<std::vector<int> >(newVector.begin(), newVector.end());
	for(std::vector<std::pair<int, int> >::iterator it = pairs.begin(); it != pairs.end(); it++)
	{
		if(it->second != INT_MAX)
			binaryInsert(newVector, it->second);
	}
	_vector = newVector;
}

void	PmergeMe::mergeList()
{
	if(_size <= 1)
		return;
	std::list<std::pair<int, int> > pairs;
	for (std::list<int>::iterator it = _list.begin(); it != _list.end(); it++)
	{
		std::list<int>::iterator next_it = it;
		next_it++;
		if (next_it != _list.end())
		{
			if (*it > *next_it)
                pairs.push_back(std::make_pair(*next_it, *it));
            else
                pairs.push_back(std::make_pair(*it, *next_it));
		}
		else
		{
			pairs.push_back(std::make_pair(*it, INT_MAX));
			break;
		}
		it = next_it;
	}
	std::list<int> newList;
	for(std::list<std::pair<int, int> >::iterator it = pairs.begin(); it != pairs.end(); it++)
	{
		newList.push_back(it->first);
	}
	mergeSort<std::list<int> >(newList.begin(), newList.end());
	for(std::list<std::pair<int, int> >::iterator it = pairs.begin(); it != pairs.end(); it++)
	{
		if(it->second != INT_MAX)
			binaryInsert(newList, it->second);
	}
	_list = newList;
}
