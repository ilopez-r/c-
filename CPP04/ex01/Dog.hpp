/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 15:33:05 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/07/11 12:21:38 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include "Animal.hpp"
# include "Brain.hpp"

class Dog:public Animal
{
	private:
			Brain* _brain;
	public:
			Dog (void);
			Dog (const Dog& copy);
			Dog& operator=(const Dog& other);
			~Dog (void);
			void makeSound() const;
};
