/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 16:44:24 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/08/27 13:48:16 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
			const std::string _name;
			bool _signed;
			const int _gradesign;
			const int _gradeexec;
	public:
			AForm (void);
			AForm (std::string name, int gradesign, int gradeexec);
			AForm (const AForm& copy);
			AForm& operator=(const AForm& other);
			virtual ~AForm (void);
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
			class NotSignedException: public std::exception
			{
				public:
						const char	*what() const throw();
			};
			void beSigned(Bureaucrat &bureaucrat);
			virtual void execute(Bureaucrat const & executor) const = 0;
};

std::ostream& operator << (std::ostream& out, const AForm& b);