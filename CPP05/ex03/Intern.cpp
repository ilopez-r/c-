/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 16:58:20 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/08/27 19:00:28 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	//std::cout << "Default constructor called\n";
}

Intern::Intern(const Intern& copy)
{
	if (this != &copy)
		*this = copy;
	//std::cout << "Copy constructor called\n";
}

Intern& Intern::operator=(const Intern& other)
{
	(void)other;
	//std::cout << "Copy assignment operator called\n";
	return (*this);
}

Intern::~Intern()
{
	//std::cout << "Destructor called\n";
}

AForm* Intern::makeForm(std::string form, std::string target)
{
	AForm *f = NULL;
	std::string forms[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	int i = 0;
	
	while (i < 3)
	{
		if (forms[i] == form)
			break;
		i++;
	}
	switch (i)
	{
		case 0:
		{
				f = new PresidentialPardonForm(target);
				std::cout << "Intern creates a " << form << " form.\n";
				break;
		}
		case 1:
		{
				f = new RobotomyRequestForm(target);
				std::cout << "Intern creates a " << form << " form.\n";
				break;
		}
		case 2:
		{
				f = new ShrubberyCreationForm(target);
				std::cout << "Intern creates a " << form << " form.\n";
				break;
		}
		default:
				std::cout << "Intern tries to create a " << form << " form, but it doesn't exits.\n";
	}
	return (f);
}