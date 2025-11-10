/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 22:10:43 by omaezzem          #+#    #+#             */
/*   Updated: 2025/11/09 15:26:58 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "a default constructor type Cat created" << std::endl;
}

Cat::~Cat() {std::cout << "Cat is destroyed" << std::endl;}

Cat& Cat::operator=(const Cat &exist)
{
    if (this != &exist)
        Animal::operator=(exist);
    std::cout << "===== copy assignement called  ====="<< std::endl;
    return (*this);
}

Cat::Cat(const Cat &exist) : Animal(exist)
{
    std::cout << "copy constructer called"<< std::endl;
}

void    Cat::makeSound() const
{
    std::cout << "Cat sound" << std::endl;
}