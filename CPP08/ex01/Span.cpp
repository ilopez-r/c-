/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 18:02:02 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/09/04 22:21:12 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
	_N = 0;
	//std::cout << "Default constructor called\n";
}

Span::Span(unsigned int N)
{
	//std::cout << "Constructor called\n";
	_N = N;
}

Span::Span(const Span& copy)
{
	_N = copy._N;
	//std::cout << "Copy constructor called\n";
}

Span& Span::operator=(const Span& other)
{
	if(this != &other)
		_N = other._N;
	//std::cout << "Copy assignment operator called\n";
	return (*this);
}

Span::~Span()
{
	//std::cout << "Destructor called\n";
}

void Span::addNumber(int i)
{
	if (_N >= 1 && _container.size() < _N)
		_container.push_back(i);
	else
		throw Span::AddNumberException();
}

const char	*Span::AddNumberException::what() const throw()
{
	return ("Impossible to add new elements");
}

int Span::shortestSpan()
{
	if (_N > 2 && _container.size() != 0)
	{
		std::sort(_container.begin(), _container.end());
		unsigned int i = 2;
		unsigned int j = 3;
		int shortestspan = _container[1] - _container[0];
		while (j < _N)
		{
			if (_container[i] != 0 && _container[j] != 0 && (shortestspan > (_container[j] - _container[i])))
				shortestspan = _container[j] - _container[i];
			j++;
			i++;
		}
		return (shortestspan);
	}
	else if (_N == 2 && _container[0] != 0 && _container[1] != 0)
		return (_container[1] - _container[0]);
	else
		throw Span::SpanException();
}

int Span::longestSpan()
{
	if (_N > 2 && _container.size() != 0)
	{
		/*std::sort(_container.begin(), _container.end());
		std::cout << *_container.begin() << "\n";
		std::cout << *_container.end() << "\n";
		int longestspan = *_container.end() - *_container.begin();*/
		/*int smallest = _container[0];
		int n = _N;
		//std::cout << n << "\n";
		while (_container[n - 1] == 0)
		{
			n--;
			//std::cout << _container[n - 1] << "\n";
		}
		//std::cout << n << "\n";
		//std::cout << _container[8] << "\n";
		int biggest = _container[n - 1];
		int longestspan = biggest - smallest;*/
		std::sort(_container.begin(), _container.end());
		std::vector<int>::iterator begin = _container.begin();
		std::vector<int>::iterator	i = begin + 1;
		int	longestspan = -2147483648;
		while (begin < _container.end())
		{
			while (i < _container.end())
			{
				if ((*i - *begin) > longestspan)
					longestspan = *i - *begin;
				i++;
			}
			begin++;
			i = begin + 1;
		}
		return (longestspan);
	}
	else if (_N == 2 && _container[0] != 0 && _container[1] != 0)
		return (_container[1] - _container[0]);
	else
		throw Span::SpanException();
}

const char	*Span::SpanException::what() const throw()
{
	return ("Impossible to show the span between elements");
}