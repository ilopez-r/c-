/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 12:13:52 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/07/09 13:03:14 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>

class ClapTrap
{
	private:
			std::string _name;
			int _Hit;
			int _Energy;
			int _Attack;
	public:
			ClapTrap (void);
			ClapTrap(std::string name);
			ClapTrap (const ClapTrap& copy);
			ClapTrap& operator=(const ClapTrap& other);
			~ClapTrap (void);
			void attack(const std::string& target);
			void takeDamage(unsigned int amount);
			void beRepaired(unsigned int amount);
};
