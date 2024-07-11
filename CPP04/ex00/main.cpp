/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 16:28:09 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/07/11 13:33:47 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    std::cout << " ~ Type: " << meta->getType() << "\n";
    std::cout << " ~ Sound: ";
    meta->makeSound();
    delete (meta);
    std::cout << "\n";

    const Animal* dog = new Dog();
    std::cout << " ~ Type: " << dog->getType() << "\n";
    std::cout << " ~ Sound: ";
    dog->makeSound();
    delete (dog);
    std::cout << "\n";
    
    const Animal* cat = new Cat();
    std::cout << " ~ Type: " << cat->getType() << "\n";
    std::cout << " ~ Sound: ";
    cat->makeSound();
    delete (cat);
    std::cout << "\n";
    
    const WrongAnimal* wrongMeta = new WrongAnimal();
    std::cout << " ~ Type: " << wrongMeta->getType() << "\n";
    std::cout << " ~ Sound: ";
    wrongMeta->makeSound();
    delete (wrongMeta);
    std::cout << "\n";
    
    const WrongAnimal* wrongCat = new WrongCat();
    std::cout << " ~ Type: " << wrongCat->getType() << "\n";
    std::cout << " ~ Sound: ";
    wrongCat->makeSound();
    delete (wrongCat);

    return (0);
}