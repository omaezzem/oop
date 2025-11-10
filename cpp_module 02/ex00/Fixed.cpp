/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 11:29:39 by omaezzem          #+#    #+#             */
/*   Updated: 2025/10/23 12:26:34 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fract = 8;

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed() : fpnumb(0)
{
    std::cout << "Default constructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return fpnumb;
}

void Fixed::setRawBits(int const raw)
{
    fpnumb = raw;
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
