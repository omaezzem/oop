/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 12:53:50 by omaezzem          #+#    #+#             */
/*   Updated: 2025/10/29 15:03:23 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main()
{
    const Point a(0, 0);
    const Point b(4, 0);
    const Point c(2, 4);
    const Point p(2, 4.01);

    if (bsp(a, b, c, p))
        std::cout << "the point p is inside the triangle" << std::endl;
    else 
        std::cout << "the point p is outside the triangle" << std::endl;
    return 0;
}
