/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 16:44:21 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/08/27 19:03:07 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm()  : _name ("Default"), _signed (false), _gradesign(150), _gradeexec(150)
{
	//std::cout << "Default constructor called AForm\n";
}

AForm::AForm(std::string name, int gradesign, int gradeexec) : _name(name), _signed(false), _gradesign(gradesign), _gradeexec(gradeexec)
{
	//std::cout << "Constructor called AForm\n";
	if (gradesign < 1|| gradeexec < 1)
		throw AForm::GradeTooHighException();
	if (gradesign > 150|| gradeexec > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm& copy) : _name(copy._name), _signed(copy._signed), _gradesign(copy._gradesign), _gradeexec(copy._gradeexec)
{
	//std::cout << "Copy constructor called AForm\n";
}

AForm& AForm::operator=(const AForm& other)
{
	if(this != &other)
		_signed = other._signed;
	//std::cout << "Copy assignment operator called AForm\n";
	return (*this);
}

AForm::~AForm()
{
	//std::cout << "Destructor called AForm\n";
}

std::string AForm::getName(void) const
{
	return(_name);
}

std::string AForm::getSigned(void) const
{
	if (_signed == true)
		return("Yes");
	return("No");
}

int AForm::getGradesign(void) const	
{
	return(_gradesign);
}

int AForm::getGradeexec(void) const
{
	return(_gradeexec);
}

const char	*AForm::GradeTooHighException::what() const throw()
{
	return("Grade Too High");
}

const char	*AForm::GradeTooLowException::what() const throw()
{
	return("Grade Too Low");
}

const char *AForm::NotSignedException::what() const throw()
{
	return("Form Not Signed");
}

void AForm::beSigned(Bureaucrat &bureaucrat)
{
	if (this->getGradesign() < 1)
		throw AForm::GradeTooHighException();
	if (this->getGradesign() > 150 || bureaucrat.getGrade() > this->getGradesign())
		throw AForm::GradeTooLowException();
	_signed = true;
}

std::ostream& operator << (std::ostream& out, const AForm& b)
{
	return (out << "Form name: " << b.getName() << ".\n   - Grade required to sign it: " << b.getGradesign() << ".\n   - Grade required to execute it: " << b.getGradeexec() << ".\n   - Signed?: " << b.getSigned() << ".\n");
}
