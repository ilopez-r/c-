/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 16:06:02 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/08/06 16:38:30 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main (void)
{
	Bureaucrat *d = NULL;
	try
	{
		Bureaucrat a("Bureaucrat1", 100);
		Bureaucrat b("Bureaucrat2", 1);
		Bureaucrat c(b);
		d = new Bureaucrat(a);
		std::cout << "a: " << a << "\n";
		std::cout << "b: " << b << "\n";
		c.decrement_grade();
		std::cout << "c: " << c << "\n";
		d->increment_grade();
		std::cout << "d: " << *d << "\n";
		while (a.getGrade() <= 151)
		{
			a.decrement_grade();
			std::cout << "a: " << a << "\n";
		}
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << "\n";
	}
	delete d;
}
