/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 12:50:05 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/08/29 18:52:44 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include <stdint.h>
# include "Data.hpp"


class Serializer
{
	private:
			Serializer (void);
			Serializer (const Serializer& copy);
			Serializer& operator=(const Serializer& other);
	public:
			~Serializer (void);
			static uintptr_t serialize(Data* ptr);
			static Data* deserialize(uintptr_t raw);
};
