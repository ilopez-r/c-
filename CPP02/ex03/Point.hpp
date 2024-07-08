/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 13:16:48 by ilopez-r          #+#    #+#             */
/*   Updated: 2024/07/05 13:17:29 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include "Fixed.hpp"

class	Point
{
	private:
		const Fixed	x;
		const Fixed y;
	public:
		Point();
		Point(const float nbr, const float nbr2);
		Point(const Point& other);
		Point(Fixed	const x, Fixed const y);
		~Point();
		Point&	operator = (const Point& other);
		Fixed	getX(void) const;
		Fixed	getY(void) const;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);