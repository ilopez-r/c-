/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 14:55:49 by ilopez-r          #+#    #+#             */
/*   Updated: 2025/02/08 14:55:50 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
			Cure();
			Cure(const Cure &copy);
			Cure& operator=(const Cure &other);
			~Cure();
			AMateria* clone() const;
			void	use(ICharacter &target);
};
