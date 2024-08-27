/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 16:58:23 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/08/27 17:36:34 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include <exception>
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class AForm;

class Intern
{
	private:
			
	public:
			Intern (void);
			Intern (const Intern& copy);
			Intern& operator=(const Intern& other);
			~Intern (void);
			AForm* makeForm(std::string form, std::string target);
};
