/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 16:18:42 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/07/09 16:45:29 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap:public FragTrap, public ScavTrap
{
	private:
			std::string _name;
	public:
			DiamondTrap (void);
			DiamondTrap(std::string name);
			DiamondTrap (const DiamondTrap& copy);
			DiamondTrap& operator=(const DiamondTrap& other);
			~DiamondTrap (void);
			void attack(const std::string& target);
			void whoAmI(void);
};
