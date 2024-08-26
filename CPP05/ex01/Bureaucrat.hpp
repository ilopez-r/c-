/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 13:12:00 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/08/26 17:05:49 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include <exception>
# include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
				std::string const _name;
				int	_grade;
	public:
			Bureaucrat (void);
			Bureaucrat (std::string name, int grade);
			Bureaucrat (const Bureaucrat& copy);
			Bureaucrat& operator=(const Bureaucrat& other);
			~Bureaucrat (void);
			std::string getName(void) const;
			int getGrade(void) const;
			void increment_grade (void);
			void decrement_grade (void);
			class GradeTooHighException: public std::exception
			{
				public:
						const char	*what() const throw();
			};
			class GradeTooLowException: public std::exception
			{
				public:
						const char	*what() const throw();
			};
			void signForm(Form &form);
};

std::ostream& operator << (std::ostream& out, const Bureaucrat& b);
