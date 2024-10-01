/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 11:25:50 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/10/01 14:27:01 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <stack>

class RPN
{
	private:
			std::stack<int> _stack;
	public:
			RPN();
			RPN(const std::string &str);
			RPN(const RPN &copy);
			~RPN();
			RPN &operator=(const RPN &other);
			void calculate(char c);
};