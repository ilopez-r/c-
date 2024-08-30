/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 16:16:32 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/08/30 18:39:49 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include <stdlib.h>

template<typename T>
class	Array
{
	private:
			T *_array;
			unsigned int _n;
	public:
			Array ();
			Array (unsigned int n);
			Array (const Array<T>& copy);
			Array<T>& operator=(const Array<T>& other);
			~Array ();
			T& operator[](unsigned int n);
			class OutOfBounds: public std::exception
			{
				public:
						const char *what() const throw();
			};
			unsigned int size(void) const;
};

# include "Array.tpp"