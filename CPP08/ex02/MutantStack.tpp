/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 15:35:37 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/09/06 16:32:42 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack(): std::stack<T>()
{
	//std::cout << "Default constructor called\n";
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T>& copy): std::stack<T>(copy)
{
	//std::cout << "Copy constructor called\n";
}

template <typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack& other)
{
	if(this != &other)
		std::stack<T>::operator=(other);
	//std::cout << "Copy assignment operator called\n";
	return (*this);
}

template <typename T>
MutantStack<T>::~MutantStack()
{
	//std::cout << "Destructor called\n";
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin() 
{
	return (this->c.begin());
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
    return (this->c.end());
}
