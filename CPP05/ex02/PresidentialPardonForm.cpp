/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 12:54:00 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/08/27 19:03:40 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()  : AForm(("PresidentialPardonForm"), (25), (5)), _target ("Default")
{
	//std::cout << "Default constructor called PresidentialPardonForm\n";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm(("PresidentialPardonForm"), (25), (5)), _target(target)
{
	//std::cout << "Constructor called PresidentialPardonForm\n";
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy)
{
	*this = copy;
	//std::cout << "Copy constructor called PresidentialPardonForm\n";
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
	if(this != &other)
		_target = other._target;
	//std::cout << "Copy assignment operator called PresidentialPardonForm\n";
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	//std::cout << "Destructor called PresidentialPardonForm\n";
}
void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (getSigned() == "No")
		throw NotSignedException();
	if (executor.getGrade() > getGradeexec())
		throw GradeTooLowException();
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox.\n";
}
