/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 12:13:44 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/07/09 15:51:17 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main()
{
	ClapTrap trap ("PACO");
	ScavTrap trop ("LUIS");

	trap.attack("PEPE");
	trop.attack("PEPE");
	trap.takeDamage(8);
	trop.takeDamage(8);
	trap.beRepaired(2);
	trop.beRepaired(2);
	trop.guardGate();
	for (int i = 0; i < 10; i++)
	{
		trap.attack("PEPE");
		trop.attack("PEPE");
	}
	trap.takeDamage(6);
	trop.takeDamage(6);
	trap.takeDamage(6);
	trop.takeDamage(6);
	trap.beRepaired(3);
	trop.beRepaired(3);
}
