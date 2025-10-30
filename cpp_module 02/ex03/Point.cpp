/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 11:24:32 by omaezzem          #+#    #+#             */
/*   Updated: 2025/10/28 11:09:19 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() :x(0), y(0) {}

Point::Point(float xt, float yt) : x(xt), y(yt) {}

Point::~Point() {}

Point::Point(const Point &other) : x(other.x), y(other.y) {}

Fixed Point::get_x() const {return x;}

Fixed Point::get_y() const {return y;}

Point& Point::operator=(const Point &exist)
{
    (void)exist;
    return (*this);
}
