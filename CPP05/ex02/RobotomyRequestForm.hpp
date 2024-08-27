/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 12:53:58 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/08/27 15:18:51 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include "AForm.hpp"
# include <cstdlib>

class RobotomyRequestForm:public AForm
{
	private:
			std::string _target;
	public:
			RobotomyRequestForm (void);
			RobotomyRequestForm (std::string target);
			RobotomyRequestForm (const RobotomyRequestForm& copy);
			RobotomyRequestForm& operator=(const RobotomyRequestForm& other);
			~RobotomyRequestForm (void);
			void execute(Bureaucrat const & executor) const;
};
