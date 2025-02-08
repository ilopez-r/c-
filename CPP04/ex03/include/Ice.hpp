/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 14:55:54 by ilopez-r          #+#    #+#             */
/*   Updated: 2025/02/08 14:55:55 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "AMateria.hpp"

class Ice : public AMateria
{
	public:
			Ice();
			Ice(const Ice &copy);
			Ice& operator=(const Ice& other);
			~Ice();
			void	use(ICharacter &target);
			AMateria* clone() const;
};