/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 15:33:05 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/07/10 16:25:48 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include "Animal.hpp"

class Dog:public Animal
{
	private:
			
	public:
			Dog (void);
			Dog (const Dog& copy);
			Dog& operator=(const Dog& other);
			~Dog (void);
			void makeSound() const;
};
