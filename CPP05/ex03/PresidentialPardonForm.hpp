/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 12:54:05 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/08/27 14:01:35 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include "AForm.hpp"

class PresidentialPardonForm:public AForm
{
	private:
			std::string _target;
	public:
			PresidentialPardonForm (void);
			PresidentialPardonForm (std::string target);
			PresidentialPardonForm (const PresidentialPardonForm& copy);
			PresidentialPardonForm& operator=(const PresidentialPardonForm& other);
			~PresidentialPardonForm (void);
			void execute(Bureaucrat const & executor) const;
};
