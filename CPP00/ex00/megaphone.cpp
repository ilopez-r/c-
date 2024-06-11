/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 12:02:44 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/06/11 12:46:12 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main (int argc, char **argv)
{
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
    else
    {
        for (int i = 1; argv[i] != NULL; i++)
            for (int j = 0; argv[i][j] != '\0'; j++)
                std::cout << (char)toupper(argv[i][j]);
        std::cout << "\n";
    }
}

/*int main (int argc, char **argv)
{
    int i;
    int j;

    i = 1;
    j = 0;
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
    else
    {
        while (argv[i] != NULL)
        {
            while (argv[i][j] != '\0')
            {
                if (argv[i][j] >= 97 && argv[i][j] <= 122)
                    argv[i][j] = argv[i][j] - 32;
                std::cout << argv[i][j];
                j++;
            }
            j = 0;
            i++;
        }
        std::cout << "\n";
    }
}*/
