/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 14:56:08 by ilopez-r          #+#    #+#             */
/*   Updated: 2025/02/08 14:56:09 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *materias[4];
		
	public:
		MateriaSource();
		MateriaSource(MateriaSource &other);
		~MateriaSource();
		MateriaSource& operator=(MateriaSource &other);
		void learnMateria(AMateria* materia);
		AMateria* createMateria(std::string const & type);
};
