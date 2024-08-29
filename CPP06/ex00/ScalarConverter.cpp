/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 12:49:46 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/08/29 19:10:29 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	//std::cout << "Default constructor called\n";
}

ScalarConverter::ScalarConverter(const ScalarConverter& copy)
{
	if (this != &copy)
		*this = copy;
	//std::cout << "Copy constructor called\n";
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other)
{
	(void)other;
	//std::cout << "Copy assignment operator called\n";
	return (*this);
}

ScalarConverter::~ScalarConverter()
{
	//std::cout << "Destructor called\n";
}

int isround(float n)
{
    int i = static_cast<int>(n);
    if(n == i)
        return (1);
    return (0);
}

int getType(std::string str)
{
	if (str == "nanf" || str == "+inff" || str == "-inff")
		return (1);
	if (str == "nan" || str == "+inf" || str == "-inf")
		return (2);
	if (str.length() == 1 && std::isalpha(str[0]))
		return (3);
	char	*eptr;
	strtol(str.c_str(), &eptr, 10);
    if (str[0] && eptr[0] == '\0')
		return (4);
	if (str[0] && !std::isalpha(str[0]))
	{
		strtod(str.c_str(), &eptr);
		if (eptr[0] == 'F' || eptr[0] == 'f')
			return (5);
		else if (eptr[0] == '\0')
			return (6);
	}
	return (0);
}

void ScalarConverter::convert(std::string str)
{
	switch (getType(str))
	{
		case 1: //PLF
		{
			std::cout << "char: impossible\n";
			std::cout << "int: impossible\n";
			std::cout << "float: " << str << "\n";
			std::cout << "double: " << str.substr(0, str.length() - 1) << "\n";
			break ;
		}
		case 2: //PLD
		{
			std::cout << "char: impossible\n";
			std::cout << "int: impossible\n";
			std::cout << "float: " << str << "f\n";
			std::cout << "double: " << str << "\n";
			break ;
		}
		case 3: //CHAR
		{
			std::cout << "char: '" << str[0] << "'\n";
			std::cout << "int: " << static_cast<int>(str[0]) << "\n";
			std::cout << "float: " << static_cast<float>(str[0]) << ".0f\n";
			std::cout << "double: " << static_cast<double>(str[0]) << ".0\n";
			break;
		}
		case 4: //INT
		{
			int i = atoi(str.c_str());
			if(isprint(static_cast<char>(i)))
				std::cout << "char: " << "'" << static_cast<char>(i) << "'\n";
			else
				std::cout << "char: Non displayable\n";
			if(atol(str.c_str()) > 2147483647 || atol(str.c_str()) < -2147483647)
			{
				std::cout << "int: number out of limits\n";
				std::cout << "float: number out of limits\n";
				std::cout << "double: number out of limits\n";
				break;
			}
			std::cout << "int: " << i << "\n";
			std::cout << "float: " << static_cast<float>(i) << ".0f\n";
			std::cout << "double: " << static_cast<double>(i) << ".0\n";
			break;
		}
		case 5: //FLOAT
		{
			float f = atof(str.c_str());
			if(isprint(static_cast<char>(f)))
				std::cout << "char: " << "'" << static_cast<char>(f) << "'\n";
			else
				std::cout << "char: Non displayable\n";
			if(atol(str.c_str()) > 2147483647 || atol(str.c_str()) < -2147483647)
			{
				std::cout << "int: number out of limits\n";
				std::cout << "float: number out of limits\n";
				std::cout << "double: number out of limits\n";
				break;
			}
			std::cout << "int: " << static_cast<int>(f) << "\n";
			if (isround(f) == 1)
			{
				std::cout << "float: " << f << ".0f\n";
				std::cout << "double: " << static_cast<double>(f) << ".0\n";
				break;
			}
			std::cout << "float: " << f << "f\n";
			std::cout << "double: " << static_cast<double>(f) << "\n";
			break;
		}
		case 6: //DOUBLE
		{
			double d = atof(str.c_str());
			if(isprint(static_cast<char>(d)))
				std::cout << "char: " << "'" << static_cast<char>(d) << "'\n";
			else
				std::cout << "char: Non displayable\n";
			if(atol(str.c_str()) > 2147483647 || atol(str.c_str()) < -2147483647)
			{
				std::cout << "int: number out of limits\n";
				std::cout << "float: number out of limits\n";
				std::cout << "double: number out of limits\n";
				break;
			}
			std::cout << "int: " << static_cast<int>(d) << "\n";
			if (isround(d) == 1)
			{
				std::cout << "float: " << static_cast<double>(d) << ".0f\n";
				std::cout << "double: " << d << ".0\n";
				break;
			}
			std::cout << "float: " << static_cast<double>(d) << "f\n";
			std::cout << "double: " << d << "\n";
			break;
		}
		default:
			std::cout << "Error: not a C++ literal\n";
			break;
	}
}