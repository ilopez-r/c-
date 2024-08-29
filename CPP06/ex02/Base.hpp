/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 19:59:51 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/08/29 20:09:36 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include <stdlib.h>

class Base
{
	private:
			
	public:
			virtual ~Base (void);
};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);