/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 14:55:40 by ilopez-r          #+#    #+#             */
/*   Updated: 2025/02/08 14:55:41 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
			std::string _type;
	public:
			AMateria();
			AMateria(std::string const &type);
			AMateria(AMateria &copy);
			AMateria& operator=(AMateria &other);
			virtual ~AMateria();
			void	setType(std::string type);
			std::string const & getType() const;
			virtual AMateria* clone() const = 0;
			virtual void use(ICharacter& target);
};
