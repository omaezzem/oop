/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 12:52:53 by omaezzem          #+#    #+#             */
/*   Updated: 2025/10/29 14:43:29 by omaezzem         ###   ########.fr       */
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
        static const int fract = 8;
    public:
        Fixed();
        Fixed(const Fixed &a);
        ~Fixed();
        Fixed(const int num);
        Fixed(const float fnum);
        Fixed& operator=(const Fixed &exist);
        float toFloat() const;
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
