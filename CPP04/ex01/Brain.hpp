/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 12:15:43 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/07/11 12:29:16 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>

class Brain
{
	private:
				std::string _ideas[100];
	public:
			Brain (void);
			Brain(std::string ideas);
			Brain (const Brain& copy);
			Brain& operator=(const Brain& other);
			~Brain (void);
};