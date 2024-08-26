/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 16:06:02 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/08/26 17:22:02 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main (void)
{
	Bureaucrat *e = NULL;
	Form *f1 = NULL;
	try
	{
		Bureaucrat a("Bureaucrat1", 100);
		Bureaucrat b("Bureaucrat2", 101);
		Bureaucrat c;
		Bureaucrat d(b);
		e = new Bureaucrat(a);
		f1 = new Form("F1", 150, 100);
		Form f2("F2", 100, 75);
		std::cout << "a: " << a << "\n";
		std::cout << "b: " << b << "\n";
		std::cout << "c: " << c << "\n";
		d.decrement_grade();
		std::cout << "d: " << d << "\n";
		e->increment_grade();
		std::cout << "e: " << *e << "\n";
		std::cout << *f1 << "\n";
		std::cout << f2 << "\n";
		a.signForm(*f1);
		b.signForm(*f1);
		b.signForm(f2);
		a.signForm(f2);
		std::cout << *f1 << "\n";
		std::cout << f2 << "\n";
		while (a.getGrade() <= 151)
			a.decrement_grade();
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << "\n";
	}
	delete e;
	delete f1;
}
