/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 12:01:27 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/09/06 17:05:53 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int main()
{
	std::cout << "MUTANTSTACK\n";
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "Last added: " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "Size of container: " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	int i = 0;
	while (it != ite)
	{
		std::cout << "Array[" << i << "] = " << *it << std::endl;
		++it;
		i++;
	}
	std::stack<int> s(mstack);

	std::cout << std::endl;
	std::cout << "STD::LIST\n";
	std::list<int> list;
	list.push_back(5);
	list.push_back(17);
	std::cout << "Last added: " << list.back() << std::endl;
	list.pop_back();
	std::cout << "Size of container: " << list.size() << std::endl;
	list.push_back(3);
	list.push_back(5);
	list.push_back(737);
	list.push_back(0);
	std::list<int>::iterator it2 = list.begin();
	std::list<int>::iterator ite2 = list.end();
	i = 0;
	while (it2 != ite2)
	{
		std::cout << "Array[" << i << "] = " << *it2 << std::endl;
		++it2;
		i++;
	}
	return (0);
}