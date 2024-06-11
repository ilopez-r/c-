/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 13:39:51 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/06/11 18:03:25 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include "Contact.hpp"

class Phonebook
{
	private:
  	  Contact	contacts[8];
   	 int		index;
	public:
		Phonebook();
		~Phonebook();
	    void new_contact();
		void search_contact();         
};
