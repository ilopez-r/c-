/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 16:06:02 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/08/27 18:59:34 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	Bureaucrat *b5 = NULL;
	AForm *f1 = NULL;
	RobotomyRequestForm *f2 = NULL;
	Intern *i2 = NULL;
	AForm* f4;
	try
	{
		Bureaucrat b1("Bureaucrat1", 100);
		Bureaucrat b2("Bureaucrat2", 1);
		Bureaucrat b3;
		Bureaucrat b4(b2);
		b5 = new Bureaucrat(b1);
		f1 = new ShrubberyCreationForm("F1");
		f2 = new RobotomyRequestForm("F2");
		PresidentialPardonForm f3("F3");
		Intern i1;
		i2 = new Intern;
		Intern i3(i1);
		
		std::cout << "b1: " << b1 << "\n";
		std::cout << "b2: " << b2 << "\n";
		std::cout << "b3: " << b3 << "\n";
		b4.decrement_grade();
		std::cout << "b4: " << b4 << "\n";
		b5->increment_grade();
		std::cout << "b5: " << *b5 << "\n";
		std::cout << *f1 << "\n";
		std::cout << *f2 << "\n";
		std::cout << f3 << "\n";
		b1.signForm(*f1);
		b1.executeForm(*f1);
		b2.signForm(*f1);
		b2.executeForm(*f1);
		std::cout << *f1 << "\n";
		b1.signForm(*f2);
		b1.executeForm(*f2);
		b2.signForm(*f2);
		b1.executeForm(*f2);
		b2.executeForm(*f2);
		std::cout << *f2 << "\n";
		b1.signForm(f3);
		b1.executeForm(f3);
		b2.signForm(f3);
		b1.executeForm(f3);
		b2.executeForm(f3);
		std::cout << f3 << "\n";
		f4 = i1.makeForm("shrubbery creation", "F4");
		b2.signForm(*f4);
		b2.executeForm(*f4);
		std::cout << *f4 << "\n";
		delete f4;
		f4 = i2->makeForm("robotomy request", "F5");
		b2.signForm(*f4);
		b2.executeForm(*f4);
		std::cout << *f4 << "\n";
		delete f4;
		f4 = i3.makeForm("presidential pardon", "F6");
		b2.signForm(*f4);
		b2.executeForm(*f4);
		std::cout << *f4 << "\n";
		delete f4;
		f4 = i3.makeForm("yoquesexdd", "F7");
		if (f4)
			std::cout << *f4 << "\n";
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << "\n";
	}
	delete b5;
	delete f1;
	delete f2;
	delete i2;
}