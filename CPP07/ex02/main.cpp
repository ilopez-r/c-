/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 16:16:16 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/09/03 16:14:21 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
    std::cout << "-        [test with strings]        -" << std::endl;
    Array<std::string> strs(2);
    try
    {
        strs[0] = "Hello";
        strs[1] = "World!";
        
        std::cout << "strs[0]: " << strs[0] << std::endl;
        std::cout << "strs[1]: " << strs[1] << std::endl;
        std::cout << "Array size is: " << strs.size() << std::endl;

        std::cout << "Attempting to access strs[3]: ";
        std::cout << strs[3] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << "\n";
    }

    std::cout << "-        [test with ints]        -" << std::endl;
    try
    {
        Array<int> ints(3);
        ints[0] = 42;
        ints[1] = 28;
        ints[2] = 16;
        
        std::cout << "ints[0]: " << ints[0] << std::endl;
        std::cout << "ints[1]: " << ints[1] << std::endl;
        std::cout << "ints[2]: " << ints[2] << std::endl;
        std::cout << "Array size is: " << ints.size() << std::endl;

        std::cout << "Attempting to access ints[5]: ";
        std::cout << ints[5] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << "\n";
    }

    std::cout << "-        [test with chars]        -" << std::endl;
    try
    {
        Array<char> chars(5);
        chars[0] = 'A';
        chars[1] = 'B';
        chars[2] = 'C';
        chars[3] = 'D';
        chars[4] = 'E';

        for (unsigned int i = 0; i < chars.size(); ++i)
        {
            std::cout << "chars[" << i << "]: " << chars[i] << std::endl;
        }
        std::cout << "Array size is: " << chars.size() << std::endl;

        std::cout << "Attempting to access chars[7]: ";
        std::cout << chars[7] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << "\n";
    }

    std::cout << "-        [test with copy constructor]        -" << std::endl;
    try
    {
        Array<int> original(3);
        original[0] = 1;
        original[1] = 2;
        original[2] = 3;

        Array<int> copy(original);

        std::cout << "Original array: ";
        for (unsigned int i = 0; i < original.size(); ++i)
        {
            std::cout << original[i] << " ";
        }
        std::cout << std::endl;

        std::cout << "Copied array: ";
        for (unsigned int i = 0; i < copy.size(); ++i)
        {
            std::cout << copy[i] << " ";
        }
        std::cout << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << "\n";
    }

    return 0;
}
