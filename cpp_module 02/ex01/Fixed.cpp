/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 11:31:10 by omaezzem          #+#    #+#             */
/*   Updated: 2025/10/29 13:29:57 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fract = 8;

int Fixed::toInt(void) const {return (fpnumb >> fract);}

float Fixed::toFloat( void ) const{return (static_cast<float>(fpnumb) / (1 << fract));}

Fixed::~Fixed() {std::cout << "Destructor called" << std::endl;}

Fixed::Fixed() : fpnumb(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &exist)
{
    if (this != &exist){
        fpnumb = exist.fpnumb;
    }
    std::cout << "Copy assignment operator called" << std::endl;
    return *this;
}

Fixed::Fixed(const Fixed& exist)
{
    fpnumb = exist.fpnumb;
    std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(const int num)
{
    fpnumb = num * (1 << fract);
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float fnum)
{
    std::cout << "Float constructor called"<< std::endl;
    fpnumb = roundf(fnum * (1 << fract));
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return out;
}
