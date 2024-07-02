/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 15:05:19 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/07/01 16:41:16 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>

class Weapon
{
	private:
			std::string type;
			Weapon(void);
	public:
			Weapon(std::string type);
			~Weapon(void);
			const std::string &getType(void);
			void setType(std::string type);
};
