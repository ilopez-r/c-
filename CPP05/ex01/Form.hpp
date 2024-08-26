/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 16:44:24 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/08/26 17:04:43 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
			const std::string _name;
			bool _signed;
			const int _gradesign;
			const int _gradeexec;
	public:
			Form (void);
			Form (std::string name, int gradesign, int gradeexec);
			Form (const Form& copy);
			Form& operator=(const Form& other);
			~Form (void);
			std::string getName(void) const;
			std::string getSigned(void) const;
			int getGradesign(void) const;
			int getGradeexec(void) const;
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
			void beSigned(Bureaucrat &bureaucrat);
};

std::ostream& operator << (std::ostream& out, const Form& b);