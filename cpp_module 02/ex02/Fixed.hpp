/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 11:03:33 by omaezzem          #+#    #+#             */
/*   Updated: 2025/10/29 14:45:05 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define Fixed_hpp

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int fpnumb;
        static const int fract = 8;

    public:
        Fixed();
        Fixed(const Fixed &a);
        ~Fixed();
        Fixed(const int num);
        Fixed(const float fnum);
        Fixed& operator=(const Fixed &exist);
        float toFloat( void ) const;
        int toInt(void) const;
        bool operator>(const Fixed &other) const;
        bool operator<(const Fixed &other) const;
        bool operator>=(const Fixed &other) const;
        bool operator<=(const Fixed &other) const;
        bool operator==(const Fixed &other) const;
        bool operator!=(const Fixed &other) const;
        Fixed operator-(const Fixed &other) const;
        Fixed operator+(const Fixed &other) const;
        Fixed operator*(const Fixed &other) const;
        Fixed operator/(const Fixed &other) const;
        Fixed operator++();
        Fixed operator--(); 
        Fixed operator++(int);
        Fixed operator--(int); 
        static Fixed& min(Fixed &a, Fixed &b);
        static const Fixed& min(const Fixed &a, const Fixed &b);
        static Fixed& max(Fixed &a, Fixed &b);
        static const Fixed& max(const Fixed &a, const Fixed &b);
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif