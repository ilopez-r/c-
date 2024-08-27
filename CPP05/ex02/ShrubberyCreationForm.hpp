/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 12:53:49 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/08/27 13:55:11 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include "AForm.hpp"
# include <fstream>

class ShrubberyCreationForm:public AForm
{
	private:
			std::string _target;
	public:
			ShrubberyCreationForm (void);
			ShrubberyCreationForm (std::string target);
			ShrubberyCreationForm (const ShrubberyCreationForm& copy);
			ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);
			~ShrubberyCreationForm (void);
			void execute(Bureaucrat const & executor) const;
};
