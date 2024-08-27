/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 12:53:52 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/08/27 19:01:14 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()  : AForm(("RobotomyRequestForm"), (72), (45)), _target ("Default")
{
	//std::cout << "Default constructor called RobotomyRequestForm\n";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm(("RobotomyRequestForm"), (72), (45)), _target(target)
{
	//std::cout << "Constructor called RobotomyRequestForm\n";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy)
{
	*this = copy;
	//std::cout << "Copy constructor called RobotomyRequestForm\n";
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
	if(this != &other)
		_target = other._target;
	//std::cout << "Copy assignment operator called RobotomyRequestForm\n";
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	//std::cout << "Destructor called RobotomyRequestForm\n";
}
void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (getSigned() == "No")
		throw NotSignedException();
	if (executor.getGrade() > getGradeexec())
		throw GradeTooLowException();
	srand(time(0));
	int i = rand() % 2;
	if (i == 0)
		std::cout << _target << " has been robotomized.\n";
	else
		std::cout << _target << " has not been robotomized.\n";
}
