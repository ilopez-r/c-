/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 12:13:44 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/07/09 16:02:54 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	ClapTrap trap ("PACO");
	ScavTrap trop ("LUIS");
	FragTrap trep ("JAVIER");

	trap.attack("PEPE");
	trop.attack("PEPE");
	trep.attack("PEPE");
	trap.takeDamage(8);
	trop.takeDamage(8);
	trep.takeDamage(8);
	trap.beRepaired(2);
	trop.beRepaired(2);
	trep.beRepaired(2);
	trop.guardGate();
	trep.highFivesGuys();
	for (int i = 0; i < 10; i++)
	{
		trap.attack("PEPE");
		trop.attack("PEPE");
		trep.attack("PEPE");
	}
	trap.takeDamage(6);
	trop.takeDamage(6);
	trep.takeDamage(6);
	trap.takeDamage(6);
	trop.takeDamage(6);
	trep.takeDamage(6);
	trap.beRepaired(3);
	trop.beRepaired(3);
	trep.beRepaired(3);
}
