/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 15:25:43 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/07/10 17:02:34 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>

class Animal
{
	protected:
				std::string _type;
	public:
			Animal (void);
			Animal(std::string type);
			Animal (const Animal& copy);
			Animal& operator=(const Animal& other);
			virtual ~Animal (void);
			virtual void makeSound() const;
			std::string getType(void) const;
};
