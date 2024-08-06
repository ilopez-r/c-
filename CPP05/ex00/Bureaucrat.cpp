/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 13:12:03 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/08/06 16:31:26 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "Default constructor called\n";
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	std::cout << "Constructor called\n";
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy) : _name(copy._name)
{
	_grade = copy._grade;
	std::cout << "Copy constructor called\n";
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
	if(this != &other)
		_grade = other._grade;
	std::cout << "Copy assignment operator called\n";
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor called\n";
}

std::string Bureaucrat::getName(void) const
{
	return(_name);
}

int Bureaucrat::getGrade(void) const
{
	return(_grade);
}

void Bureaucrat::increment_grade (void)
{
	if (_grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	_grade--;
}

void Bureaucrat::decrement_grade (void)
{
	
	if (_grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	_grade++;
}

const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return("Grade Too High");
}

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return("Grade Too Low");
}

std::ostream& operator << (std::ostream& out, const Bureaucrat& b)
{
	return (out << b.getName() << ", bureaucrat grade " << b.getGrade() << ".\n");
}
