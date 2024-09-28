/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 17:08:25 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/09/28 18:01:00 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <cstdlib>


class BitcoinExchange
{
    private:
        std::map<std::string, double> _btc;
    public:
        BitcoinExchange();
		BitcoinExchange(const std::string &database, const std::string &inputFile);
        BitcoinExchange(const BitcoinExchange & other);
        ~BitcoinExchange();
        BitcoinExchange & operator=(const BitcoinExchange & other);

        void extractInputFile(std::ifstream &fileStream);
        void extractDbFile(std::ifstream &dbStream);
        void addToMap(const std::string &date, const double &value);
        void getValueFromDb(const std::string &date, const double &value);
        
};