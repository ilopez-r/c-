/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 20:02:04 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/08/29 21:04:45 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base()
{
	//std::cout << "Destructor called\n";
}

Base *generate(void)
{
	Base *b = NULL;
	srand(time(0));
	int i = (rand() % 3);
	switch (i)
	{
		case 0:
			return (b = new A());
		case 1:
			return (b = new B());
	}
	return (b = new C());
}

void identify(Base* p)
{
	if(dynamic_cast<A*>(p))
		std::cout << "Type class A\n";
	else if(dynamic_cast<B*>(p))
		std::cout << "Type class B\n";
	else
		std::cout << "Type class C\n";
}

void identify(Base& p)
{
	try 
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "Type class A\n";
	}
	catch (const std::exception&) 
	{
		try 
		{
			(void)dynamic_cast<B&>(p);
			std::cout << "Type class B\n";
		}
		catch (const std::exception&) 
		{
			(void)dynamic_cast<C&>(p);
			std::cout << "Type class C\n";
        }
    }
}
