/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 15:55:20 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/07/09 15:58:14 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class FragTrap:public ClapTrap
{
	private:
			
	public:
			FragTrap (void);
			FragTrap(std::string name);
			FragTrap (const FragTrap& copy);
			FragTrap& operator=(const FragTrap& other);
			~FragTrap (void);
			void highFivesGuys(void);
};
