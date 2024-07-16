/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 16:28:09 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/07/11 16:31:25 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main() 
{
    //Animal* b = new Animal();
    Animal* meta [4];
      
    for (int i = 0; i < 4; i++)
    {
        if (i % 2 == 0)
            meta [i] = new Dog();
        else
            meta [i] = new Cat();
        std::cout << " ~ Type: " << meta[i]->getType() << "\n";
        std::cout << " ~ Sound: ";
        meta[i]->makeSound();
        delete (meta[i]);
        std::cout << "\n";
    }
    return (0);
}