/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 11:03:30 by omaezzem          #+#    #+#             */
/*   Updated: 2025/10/29 14:42:50 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

float Fixed::toFloat( void ) const{return (static_cast<float>(fpnumb) / (1 << fract));}

int Fixed::toInt(void) const {return (fpnumb >> fract);}

Fixed::Fixed(const int num) {fpnumb = num * (1 << fract);}

Fixed::Fixed(const float fnum) {fpnumb = roundf(fnum * (1 << fract));}

Fixed::Fixed(const Fixed& exist) {fpnumb = exist.fpnumb;}

Fixed::Fixed() : fpnumb(0){}

Fixed::~Fixed() {}

Fixed& Fixed::operator=(const Fixed &exist)
{
    if (this != &exist){
        fpnumb = exist.fpnumb;
    }
    return *this;
}

bool Fixed::operator>(const Fixed &other) const
{
    if (this->fpnumb > other.fpnumb)
        return true;
    return false;
}

bool Fixed::operator<(const Fixed &other) const
{
    if (this->fpnumb < other.fpnumb)
        return true;
    return false;
}

bool Fixed::operator>=(const Fixed &other) const
{
    if (this->fpnumb >= other.fpnumb)
        return true;
    return false;
}

bool Fixed::operator<=(const Fixed &other) const
{
    if (this->fpnumb <= other.fpnumb)
        return true;
    return false;
}

bool Fixed::operator==(const Fixed &other) const
{
    if (this->fpnumb == other.fpnumb)
        return true;
    return false;
}

bool Fixed::operator!=(const Fixed &other) const
{
    if (this->fpnumb != other.fpnumb)
        return true;
    return false;
}

Fixed Fixed::operator-(const Fixed &other) const
{
    Fixed mins;
    mins.fpnumb = this->fpnumb - other.fpnumb;
    return mins;
}
Fixed Fixed::operator+(const Fixed &other) const
{
    Fixed plus;
    plus.fpnumb = this->fpnumb + other.fpnumb;
    return plus;
}
Fixed Fixed::operator*(const Fixed &other) const
{
    Fixed multi;
    multi.fpnumb = (this->fpnumb * other.fpnumb) / (1 << fract);
    return multi;
}
Fixed Fixed::operator/(const Fixed &other) const
{
    Fixed devide;
    devide.fpnumb = ((this->fpnumb / other.fpnumb) * (1 << fract));
    return devide;
}

Fixed Fixed::operator++() 
{
    this->fpnumb += 1;
    return *this;
}

Fixed Fixed::operator--()
{
    this->fpnumb -= 1;
    return *this;
}

Fixed Fixed::operator++(int) 
{
    Fixed oldplus = *this;
    this->fpnumb += 1;
    return oldplus;
}

Fixed Fixed::operator--(int)
{
    Fixed oldmin = *this;
    this->fpnumb -= 1;
    return oldmin;
}


Fixed& Fixed::min(Fixed &a, Fixed &b)
{
    if (a > b)
        return b;
    else
        return a;
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a > b)
        return b;
    else
        return a;
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
    if (a < b)
        return b;
    else
        return a;
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a < b)
        return b;
    else
        return a;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return out;
}
