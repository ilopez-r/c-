/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 17:11:13 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/07/01 19:17:36 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main (int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Wrong number of arguments\n";
		return (1);
	}
	std::string argv2 = std::string(argv[2]);
	if (argv2.empty())
	{
		std::cout << "No word to replace" << "\n";
		return (1);
	}
	std::ifstream og_file(argv[1]);
	if (og_file.is_open() == false)
	{
		std::cout << "Cannot open file: " << argv[1] << "\n";
		return (1);
	}
	std::string  tmp = argv[1];
	tmp += ".replace";
	std::ofstream new_file(tmp. c_str());
	if (new_file.is_open() == false)
	{
		std::cout << "Cannot create file: " << tmp << "\n";
		return (1);
	}
	std::string line;
	while (std::getline(og_file, line))
	{
		size_t initpos = 0;
		size_t r_pos = line.find(argv[2], initpos);
		tmp = "";
		while (r_pos != std::string::npos)
		{
			tmp += line.substr(initpos, r_pos - initpos);
			tmp += argv[3];
			initpos = r_pos + argv2.length();
			r_pos = line.find(argv[2], initpos);
		}
		tmp += line.substr(initpos);
		new_file << tmp << "\n";
		tmp.clear();
	}
	og_file.close();
	new_file.close();
}
