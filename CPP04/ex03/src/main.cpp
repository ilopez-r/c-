/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 14:55:23 by ilopez-r          #+#    #+#             */
/*   Updated: 2025/02/08 14:55:24 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AMateria.hpp"
#include "../include/Character.hpp"
#include "../include/Cure.hpp"
#include "../include/Ice.hpp"
#include "../include/ICharacter.hpp"
#include "../include/IMateriaSource.hpp"
#include "../include/MateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	ICharacter* me = new Character("me");
	
	AMateria* tmp;
	AMateria* tmp3;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp3 = src->createMateria("cure");
	me->equip(tmp3);
	
	ICharacter* bob = new Character("bob");
	Character *ant = new Character(*(Character *)(me));
	AMateria* tmp2 = src->createMateria("cure");
	AMateria* tmp4 = src->createMateria("cure");
	AMateria* tmp5 = src->createMateria("cure");
	AMateria* tmp6 = src->createMateria("cure");
	ant->equip(tmp2);
	ant->equip(tmp4);
	ant->equip(tmp5);
	ant->equip(tmp6);
	
	std::cout << std::endl;
	std::cout << "OUTPUT" << std::endl;
	me->use(0, *bob);
	me->use(1, *bob);
	ant->use(0, *ant);
	AMateria *saveIce = ant->getMateria(0);
	ant->unequip(0);
	ant->use(1, *bob);
	ant->use(0, *ant);
	me->use(0, *bob);
	
	delete bob;
	delete me;
	delete src;
	delete ant;
	delete saveIce;
	
	return 0;
}