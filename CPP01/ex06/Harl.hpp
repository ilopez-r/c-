/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 10:57:05 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/07/02 11:56:54 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>

class Harl
{
	private:
			void debug(void);
			void info(void);
			void warning(void);
			void error(void);
			std::string	level[4];
			void (Harl::*functions[4])(void);
	public:
			Harl(void);
			~Harl(void);
			void complain(std::string level);
};
