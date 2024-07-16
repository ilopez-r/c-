/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 16:19:01 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/07/10 16:25:54 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include "WrongAnimal.hpp"

class WrongCat:public WrongAnimal
{
	private:
			
	public:
			WrongCat (void);
			WrongCat (const WrongCat& copy);
			WrongCat& operator=(const WrongCat& other);
			~WrongCat (void);
			void makeSound() const;
};
