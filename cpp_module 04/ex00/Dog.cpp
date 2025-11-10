/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 22:07:00 by omaezzem          #+#    #+#             */
/*   Updated: 2025/11/09 14:24:29 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "a default constructor type Dog created" << std::endl;
}

Dog::~Dog() {std::cout << "Dog is destroyed" << std::endl;}

Dog& Dog::operator=(const Dog &exist)
{
    if (this != &exist)
        Animal::operator=(exist);
    std::cout << "===== copy assignement called  ====="<< std::endl;
    return (*this);
}

Dog::Dog(const Dog &exist) : Animal(exist)
{
    std::cout << "copy constructer called"<< std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Dog sound" << std::endl;
}
