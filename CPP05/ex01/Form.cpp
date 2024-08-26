/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 16:44:21 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/08/26 17:20:22 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form()  : _name ("Default"), _signed (false), _gradesign(150), _gradeexec(150)
{
	std::cout << "Default constructor called Form\n";
}

Form::Form(std::string name, int gradesign, int gradeexec) : _name(name), _signed(false), _gradesign(gradesign), _gradeexec(gradeexec)
{
	std::cout << "Constructor called Form\n";
	if (gradesign < 1|| gradeexec < 1)
		throw Form::GradeTooHighException();
	if (gradesign > 150|| gradeexec > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form& copy) : _name(copy._name), _signed(copy._signed), _gradesign(copy._gradesign), _gradeexec(copy._gradeexec)
{
	std::cout << "Copy constructor called Form\n";
}

Form& Form::operator=(const Form& other)
{
	if(this != &other)
		_signed = other._signed;
	std::cout << "Copy assignment operator called Form\n";
	return (*this);
}

Form::~Form()
{
	std::cout << "Destructor called Form\n";
}

std::string Form::getName(void) const
{
	return(_name);
}

std::string Form::getSigned(void) const
{
	if (_signed == true)
		return("Yes");
	return("No");
}

int Form::getGradesign(void) const	
{
	return(_gradesign);
}

int Form::getGradeexec(void) const
{
	return(_gradeexec);
}

const char	*Form::GradeTooHighException::what() const throw()
{
	return("Grade Too High");
}

const char	*Form::GradeTooLowException::what() const throw()
{
	return("Grade Too Low");
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
	if (this->getGradesign() < 1)
		throw Form::GradeTooHighException();
	if (this->getGradesign() > 150 || bureaucrat.getGrade() > this->getGradesign())
		throw Form::GradeTooLowException();
	_signed = true;
}

std::ostream& operator << (std::ostream& out, const Form& b)
{
	return (out << "Form name: " << b.getName() << ".\n   - Grade required to sign it: " << b.getGradesign() << ".\n   - Grade required to execute it: " << b.getGradeexec() << ".\n   - Signed?: " << b.getSigned() << ".\n");
}
