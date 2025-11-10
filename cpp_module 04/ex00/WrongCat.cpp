/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 15:13:07 by omaezzem          #+#    #+#             */
/*   Updated: 2025/11/09 14:24:10 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout << "a default constructor type WrongCat created" << std::endl;
}

WrongCat::~WrongCat() {std::cout << "WrongCat is destroyed" << std::endl;}

WrongCat& WrongCat::operator=(const WrongCat &exist)
{
    if (this != &exist)
        WrongAnimal::operator=(exist);
    std::cout << "===== copy assignement called  ====="<< std::endl;
    return (*this);
}

WrongCat::WrongCat(const WrongCat &exist) : WrongAnimal(exist)
{
    std::cout << "copy constructer called"<< std::endl;
}

void    WrongCat::makeSound() const { std::cout << "WrongCat sound" << std::endl; }