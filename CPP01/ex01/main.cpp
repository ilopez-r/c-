/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 13:33:01 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/07/01 14:46:23 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *horde;
	int i = 0;
	
	horde = zombieHorde(5, "PACO");
	while (i < 5)
	{
		horde[i].announce();
		i++;
	}
	delete []horde;
}
