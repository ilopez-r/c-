/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 13:12:03 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/08/27 19:00:57 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name ("Default"), _grade(150)
{
	//std::cout << "Default constructor called\n";
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	//std::cout << "Constructor called\n";
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
	//std::cout << "Copy constructor called\n";
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
	if(this != &other)
		_grade = other._grade;
	//std::cout << "Copy assignment operator called\n";
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	//std::cout << "Destructor called\n";
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

void Bureaucrat::signForm(AForm &form)
{
	if (form.getSigned() == "Yes")
		std::cout << getName() << " tried to sign " << form.getName() << " but is already signed" << ".\n";
	else
	{
		try
		{
			form.beSigned(*this);
			std::cout << getName() << " signed " << form.getName() << ".\n";
		}
		catch(const std::exception& e)
		{
			std::cout << getName() << " couldn't sign " << form.getName() << " because " << e.what() << ".\n";
		}
	}
}

void Bureaucrat::executeForm(AForm const & form)
{
	try
	{
		if (form.getSigned() == "Yes" && getGrade() <= form.getGradeexec())
			std::cout << getName() << " executed " << form.getName() << ".\n";
		form.execute(*this);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

std::ostream& operator << (std::ostream& out, const Bureaucrat& b)
{
	return (out << b.getName() << ", bureaucrat grade " << b.getGrade() << ".\n");
}
