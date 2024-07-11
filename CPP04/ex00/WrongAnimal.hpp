/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 16:18:56 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/07/10 17:02:40 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>

class WrongAnimal
{
	protected:
				std::string _type;
	public:
			WrongAnimal (void);
			WrongAnimal(std::string type);
			WrongAnimal (const WrongAnimal& copy);
			WrongAnimal& operator=(const WrongAnimal& other);
			~WrongAnimal (void);
			void makeSound() const;
			std::string getType(void) const;
};
