/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 12:53:47 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/08/27 19:04:02 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()  : AForm(("ShrubberyCreationForm"), (145), (137)),_target ("Default")
{
	//std::cout << "Default constructor called ShrubberyCreationForm\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm(("ShrubberyCreationForm"), (145), (137)), _target(target)
{
	//std::cout << "Constructor called ShrubberyCreationForm\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy)
{
	*this = copy;
	//std::cout << "Copy constructor called ShrubberyCreationForm\n";
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
	if(this != &other)
		_target = other._target;
	//std::cout << "Copy assignment operator called ShrubberyCreationForm\n";
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	//std::cout << "Destructor called ShrubberyCreationForm\n";
}
void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (getSigned() == "No")
		throw NotSignedException();
	if (executor.getGrade() > getGradeexec())
		throw GradeTooLowException();
	std::string name(this->_target + "_shrubbery");
	std::ofstream out(name.c_str());
	out << "               ,@@@@@@@," << std::endl;
	out << "       ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl;
	out << "       ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl;
	out << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl;
	out << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl;
	out << "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl;
	out << "   `&%\\ ` /%&'    |.|        \\ '|8'" << std::endl;
	out << "       |o|        | |         | |" << std::endl;
	out << "       |.|        | |         | |" << std::endl;
	out << "   .\\. \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_" << std::endl;
	out.close();
}
