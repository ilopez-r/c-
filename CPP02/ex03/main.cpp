/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 13:14:33 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/07/05 13:21:26 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int	main(void)
{
	Point	const a(0, 0);
	Point	const b(4, 0);
	Point	const c(2, 4);
	Point	const point(2, 2);

	if (bsp(a, b, c, point))
		std::cout << "The point is inside the triangle" << "\n";
	else
		std::cout << "The point is not inside the triangle" << "\n";
	return 0;
}