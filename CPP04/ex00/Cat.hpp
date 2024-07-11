/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 15:32:53 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/07/10 16:25:46 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include "Animal.hpp"

class Cat:public Animal
{
	private:
			
	public:
			Cat (void);
			Cat (const Cat& copy);
			Cat& operator=(const Cat& other);
			~Cat (void);
			void makeSound() const;
};
