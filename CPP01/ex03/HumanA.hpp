/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 15:05:14 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/07/01 16:41:57 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include"Weapon.hpp"

class HumanA
{
	private:
			std::string name;
			Weapon &_arma;
			HumanA(void);
	public:
			HumanA(std::string name, Weapon &arma);
			~HumanA(void);
			void attack(void);
};
