/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 17:43:48 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/10/01 14:42:01 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{
	
}

RPN::RPN(const std::string &str)
{
	if (str[0] == ' ' || str[str.length() - 1] == ' ')
		throw std::invalid_argument("Invalid string: spaces at the beginning or at the end");
	for (size_t i = 0; i < str.length(); i++)
	{
		if (std::isdigit(str[i]) || str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/')
		{
			if (str[i + 1] != ' ' && (i + 1) != str.length())
				throw std::invalid_argument("Invalid string: no spaces between elements");
			if (str[i + 1] == ' ' && str[i + 2] == ' ')
				throw std::invalid_argument("Invalid string: two consecutive spaces");
			if (std::isdigit(str[i]))
				_stack.push(str[i] - '0');
			else
				calculate(str[i]);
		}
		else if(str[i] != ' ')
			throw std::invalid_argument("Invalid string: invalid character in string");
	}
	if (_stack.size() != 1)
		throw std::invalid_argument("Invalid string: more numbers than possible operations");
	std::cout << _stack.top() << std::endl;
}

RPN::RPN(const RPN &copy)
{
	*this = copy;
}

RPN::~RPN()
{
	
}

RPN &RPN::operator=(const RPN &other)
{
	if (this != &other)
		_stack = other._stack;	
	return *this;
}

void RPN::calculate(char c)
{
	if (_stack.size() < 2)
		throw std::invalid_argument("Invalid operation: not enough numbers to operate");
	int a = _stack.top();
	_stack.pop();
	int b = _stack.top();
	_stack.pop();
	if (c == '+')
		_stack.push(b + a);
	if (c =='-')
		_stack.push(b - a);
	if (c =='*')
		_stack.push(b * a);
	if (c =='/')
	{
		if(a == 0)
			throw std::invalid_argument("Invalid operation: division by zero");
		_stack.push(b / a);
	}
}
