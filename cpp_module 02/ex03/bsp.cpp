/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 12:53:46 by omaezzem          #+#    #+#             */
/*   Updated: 2025/10/29 14:53:09 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

Fixed formula(Point const a, Point const b, Point const c)
{
    Fixed x1 = a.get_x();
    Fixed y1 = a.get_y();
    Fixed x2 = b.get_x();
    Fixed y2 = b.get_y();
    Fixed x3 = c.get_x();
    Fixed y3 = c.get_y();

    Fixed sum = x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2);
    
    if (sum < Fixed(0))
        sum = Fixed(0) - sum;
    sum = sum * Fixed(0.5f);

    return sum;
}

//Area=1/2​∣x1​(y2​−y3​)+x2​(y3​−y1​)+x3​(y1​−y2​)∣

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    Fixed ABC = formula(a, b, c);
    Fixed PBC = formula(point, b, c);
    Fixed PAC = formula(point, a, c);
    Fixed PAB = formula(point, a, b);

    if (PAB == Fixed(0) || PBC == Fixed(0) || PAC == Fixed(0))
        return false;
    if ((PBC + PAC + PAB) == ABC)
        return true;
    else
        return false;
}
