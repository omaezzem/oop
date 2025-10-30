/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 11:31:02 by omaezzem          #+#    #+#             */
/*   Updated: 2025/10/12 11:33:48 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP


#include <iostream>
#include <cmath>

class Fixed 
{
    private:
        int fpnumb;
        static const int fract;
    public:
        Fixed();
        Fixed(const Fixed &a);
        ~Fixed();
        Fixed(const int num);
        Fixed(const float fnum);    
        Fixed& operator=(const Fixed &other);
        int toInt( void ) const;
        float toFloat( void ) const;
};  
std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif