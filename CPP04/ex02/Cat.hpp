/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 15:32:53 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/07/11 12:21:56 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include "Animal.hpp"
# include "Brain.hpp"

class Cat:public Animal
{
	private:
			Brain* _brain;
	public:
			Cat (void);
			Cat (const Cat& copy);
			Cat& operator=(const Cat& other);
			~Cat (void);
			void makeSound() const;
};
