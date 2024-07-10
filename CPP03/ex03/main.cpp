/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 12:13:44 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/07/10 12:25:01 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main() {
    DiamondTrap diamond1("PACO");

    diamond1.attack("PEPE");

    diamond1.whoAmI();

    diamond1.takeDamage(50);
    diamond1.beRepaired(40);

    for (int i = 0; i < 50; ++i) {
        diamond1.attack("PEPE");
    }
    diamond1.beRepaired(10);
    diamond1.takeDamage(100);
    diamond1.whoAmI();

    return 0;
}
