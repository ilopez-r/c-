/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 18:02:02 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/09/05 21:10:59 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
	_N = 0;
	//std::cout << "Default constructor called\n";
}

Span::Span(long long int N)
{
	//std::cout << "Constructor called\n";
	if (N >= 0 && N <= 4294967295)
		_N = static_cast<unsigned int>(N);
	else
		throw std::out_of_range("Parametrer should be on the unsigned int limits (0 - 4294967295)");
}

Span::Span(const Span& copy)
{
	_N = copy._N;
	_container = copy._container;
	//std::cout << "Copy constructor called\n";
}

Span& Span::operator=(const Span& other)
{
	if(this != &other)
	{
		_N = other._N;
		_container = other._container;
	}
	//std::cout << "Copy assignment operator called\n";
	return (*this);
}

Span::~Span()
{
	//std::cout << "Destructor called\n";
}

void Span::addNumber(int i)
{
	try
	{
		if (_container.size() < _N)
			_container.push_back(i);
		else
			throw Span::AddNumberException();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

const char	*Span::AddNumberException::what() const throw()
{
	return ("Impossible to add new elements");
}

int Span::shortestSpan()
{
	try
	{
		if (_container.size() > 1)
		{
			std::sort(_container.begin(), _container.end());
			int shortestspan = _container[1] - _container[0];
			for (long unsigned int i = 1; i < (_container.size() - 1); i++)
			{
				if (shortestspan > (_container[i + 1] - _container[i]))
					shortestspan = _container[i + 1] - _container[i];
			}
			return (shortestspan);
		}
		else
		{
			throw Span::SpanException();
			
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << "\n";
		return (-1);
	}
}

int Span::longestSpan()
{
	try
	{
		if (_container.size() > 1)
		{
			std::sort(_container.begin(), _container.end());
			int longestspan = *(_container.end() - 1) - *_container.begin();
			return (longestspan);
		}
		else
		{
			throw Span::SpanException();
			
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << "\n";
		return (-1);
	}
}

const char	*Span::SpanException::what() const throw()
{
	return ("Impossible to show the span between elements");
}

void Span::addManyNumbers(std::vector<int>::iterator b, std::vector<int>::iterator e)
{
	try
	{
		if ((_container.size() + std::distance(b, e)) <= _N && b != e)
			_container.insert(_container.end(), b, e);
		else
			throw Span::AddNumberException();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
