/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 14:55:45 by ilopez-r          #+#    #+#             */
/*   Updated: 2025/02/08 14:55:46 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ICharacter.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

class Character : public ICharacter
{
	private:
		std::string name;
		AMateria *inventory[4];
		AMateria *toDelete[500];
	public:
		Character();
		Character (std::string name);
		Character(Character &other);
		Character& operator=(Character &other);
		~Character();
		std::string const & getName() const;
		AMateria* getMateria(int idx);
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};