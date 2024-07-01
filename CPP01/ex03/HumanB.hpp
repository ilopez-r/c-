/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 15:05:14 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/07/01 16:43:05 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include "Weapon.hpp"

class HumanB
{
	private:
			Weapon *_arma;
			std::string name;
			HumanB(void);
	public:
			HumanB(std::string name);
			~HumanB(void);
			void attack(void);
			void setWeapon(Weapon &arma);
};