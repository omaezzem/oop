/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 12:53:58 by omaezzem          #+#    #+#             */
/*   Updated: 2025/10/15 12:23:52 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"
#include <iostream>

class Point
{
    private:
        const Fixed x;
        const Fixed y;
    public:
        Point();
        Point(float xVal, float yVal);
        Point(const Point &other);
        Point& operator=(const Point &other);
        ~Point();
        Fixed get_x() const;
        Fixed get_y() const;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif
