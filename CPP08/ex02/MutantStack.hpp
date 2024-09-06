/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 12:01:24 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/09/06 16:39:38 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include <stack>

template <typename T>
class MutantStack: public std::stack<T>
{
	private:
			
	public:
			MutantStack (void);
			MutantStack (const MutantStack& copy);
			MutantStack& operator=(const MutantStack& other);
			~MutantStack (void);
			typedef typename std::stack<T>::container_type::iterator iterator;
			iterator begin();
    		iterator end();
};

# include "MutantStack.tpp"
