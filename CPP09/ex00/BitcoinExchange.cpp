/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 17:42:09 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/10/01 17:05:18 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{

}

BitcoinExchange::BitcoinExchange(const std::string &database, const std::string &inputFile)
{
	std::ifstream dbStream;
	std::ifstream fileStream;

	dbStream.open(database.c_str());
	fileStream.open(inputFile.c_str());
	if(dbStream.fail() || fileStream.fail())
	{
		std::cerr << "Error: Error opening file" << std::endl;
		exit(1);
	}
	extractDbFile(dbStream);
	extractInputFile(fileStream);
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy)
{
	_btc = copy._btc;
}

BitcoinExchange::~BitcoinExchange()
{
		
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other)
{
	if (this != &other)
		this->_btc = other._btc;
	return *this;
}

void BitcoinExchange::extractDbFile(std::ifstream &dbStream)
{
	std::string line;
	while(dbStream.good())
	{
		std::getline(dbStream, line);
		int i = line.find(',');
		std::string date = line.substr(0, i);
		double value = atof(line.substr(i + 1).c_str());
		_btc.insert(std::pair<std::string, double>(date, value));
	}
}

static void dateCheck(std::string date)
{
	int y, m, d, i;

	if (!std::isdigit(date[0]) || !std::isdigit(date[1]) || !std::isdigit(date[2]) || !std::isdigit(date[3])
		|| !std::isdigit(date[5]) || !std::isdigit(date[6]) || !std::isdigit(date[8]) || !std::isdigit(date[9]))
		throw std::invalid_argument("Error: Invalid date format");
	i = date.find('-');
	if(i != -1)
	{
		y = atoi(date.substr(0, i).c_str());
		if (y < 2009)
			throw std::invalid_argument("Error: Invalid date, date is too early");
		date = date.substr(i + 1);
	}
	else
		throw std::invalid_argument("Error: Invalid date format");
	i = date.find('-');
	if(i != -1)
	{
		m = atoi(date.substr(0, i).c_str());
		date = date.substr(i + 1);
	}
	else
		throw std::invalid_argument("Error: Invalid date format");
	d = atoi(date.c_str());
	if (y == 2009 && d == 1)
			throw std::invalid_argument("Error: Invalid date, date is too early");
	if((d < 0 || d > 31) || (m < 0 || m > 12) || ((m == 4 || m == 6 || m == 9 || m == 11) && d > 30))
		throw std::invalid_argument("Error: Invalid date format");
	if(m == 2 && (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0)) && d > 29)
		throw std::invalid_argument("Error: Leap year can't have more than 29 days in february");
	else if(m == 2 && d > 28)
		throw std::invalid_argument("Error: Not leap year can't have more than 28 days in february");
}

void BitcoinExchange::extractInputFile(std::ifstream &fileStream)
{
	std::string line;
	std::string date;
	std::string value;
	double numValue;
	int n;
	
	while (fileStream.good())
	{
		std::getline(fileStream, line);
		if(line == "date | value")
			continue;
		try
		{
			n = line.find('|');
			if(n != -1 && n!= 0)
			{
				if (line[n - 1] != ' ')
					throw std::invalid_argument("Error: Invalid date format");
				date = line.substr(0, n - 1);
				value = line.substr(n + 1).c_str();
				for (int i = 0, p = 0; value[i]; i++)
					if (value[i] == '.' && p++)
						if (p > 1)
							throw std::invalid_argument("Error: Value out of range");
				numValue = atof(value.c_str());
				dateCheck(date);
				if(numValue >= 1000 || (numValue == 0.0 && (value != "0" || value != "0.0")))
					throw std::invalid_argument("Error: Value out of range");
				if(numValue < 0.0)
					throw std::invalid_argument("Error: Not a possitive number");
				std::map<std::string, double>::iterator it = _btc.lower_bound(date);
				if(it->first != date)
					it--;
				std::cout << date << " => " << numValue << " = " << numValue * it->second << std::endl;
			}
			else
				throw std::invalid_argument("Error: Invalid input format");
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}	
}
