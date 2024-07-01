/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 13:12:58 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/07/01 14:36:30 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>

class Zombie
{
	private:
			std::string name;
	public:
			Zombie(void);
			Zombie(std::string name);
			~Zombie(void);
			void announce(void);
			void set_name(std::string name);
};

Zombie* zombieHorde(int N, std::string name);