/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 18:43:02 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/08/29 19:57:33 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>

class Data
{
	private:
			std::string _name;
	public:
		Data(void);
		Data(const Data& copy);
		Data& operator=(const Data &other);
		~Data();
};