/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 17:15:47 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/08/30 18:39:09 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<typename T>
Array<T>::Array ()
{
	_array = NULL;
	_n = 0;
}

template<typename T>
Array<T>::Array (unsigned int n)
{
	_n = n;
	_array = new T[_n];
}

template<typename T>
Array<T>::Array (const Array<T>& copy)
{
	_n = copy._n;
	_array = new T[_n];
	unsigned int i = 0;
	while (i < _n)
	{
		_array[i] = copy._array[i];
		i++;
	}
}

template<typename T>
Array<T>& Array<T>::operator=(const Array<T>& other)
{
	if (this != &other)
	{
		_n = other._n;
		if (this->_array != NULL)
			delete[] this->_array;
		unsigned int i = 0;
		while (i < _n)
		{
			_array[i] = other._array[i];
			i++;
		}
	}
	return (*this);
}

template<typename T>
Array<T>::~Array ()
{
	if (this->_array != NULL)
		delete[] this->_array;
}

template<typename T>
T& Array<T>::operator[](unsigned int n)
{
	if (n >= _n)
		throw Array<T>::OutOfBounds();
	else
		return (this->_array[n]);
}

template<typename T>
const char	*Array<T>::OutOfBounds::what() const throw()
{
	return("Out Of Bounds");
}

template<typename T>
unsigned int Array<T>::size(void) const
{
	return (_n);
}
