/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 18:01:59 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/09/05 21:09:39 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main()
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << "Numbers in Span: ";
	for (std::vector<int>::iterator it = sp._container.begin(); it != sp._container.end(); ++it)
    	std::cout << *it << " ";
    std::cout << std::endl;
	if (sp.shortestSpan() != -1)
		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
	if (sp.longestSpan() != -1)
		std::cout << "Longest span: " << sp.longestSpan() << std::endl;
	std::cout << std::endl;
	
	Span	sp3(10000);
	int		n[10000];
	srand(time(NULL));
	for (int i = 0; i < 10000; ++i)
		n[i] = std::rand() % 10000;
	for (int j = 0; j < 10000; ++j)
		sp3.addNumber(n[j]);
	if (sp3.shortestSpan() != -1)
		std::cout << "Shortest span: " << sp3.shortestSpan() << std::endl;
	if (sp3.longestSpan() != -1)
		std::cout << "Longest span: " << sp3.longestSpan() << std::endl;
	std::cout << std::endl;
	
	Span sp2(5);
	int numbers[] = {6, 3, 17, 9, 11};
	int size = sizeof(numbers) / sizeof(numbers[0]);
	std::vector<int> vector(numbers, numbers + size);
	sp2.addManyNumbers(vector.begin(), vector.end());
	std::cout << "Numbers in Span: ";
    for (std::vector<int>::iterator it = sp2._container.begin(); it != sp2._container.end(); ++it)
    	std::cout << *it << " ";
    std::cout << std::endl;
	if (sp2.shortestSpan() != -1)
		std::cout << "Shortest span: " << sp2.shortestSpan() << std::endl;
	if (sp2.longestSpan() != -1)
		std::cout << "Longest span: " << sp2.longestSpan() << std::endl;
	std::cout << std::endl;

	Span	sp4(10000);
	int		n2[10000];
	srand(time(NULL));
	for (int i = 0; i < 10000; ++i)
		n2[i] = std::rand() % 10000;
	int size2 = sizeof(n2) / sizeof(n2[0]);
	std::vector<int> vector2(n2, n2 + size2);
	sp4.addManyNumbers(vector2.begin(), vector2.end());
	if (sp4.shortestSpan() != -1)
		std::cout << "Shortest span: " << sp4.shortestSpan() << std::endl;
	if (sp3.longestSpan() != -1)
		std::cout << "Longest span: " << sp4.longestSpan() << std::endl;
	return (0);
}
