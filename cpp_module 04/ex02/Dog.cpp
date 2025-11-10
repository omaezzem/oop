/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 22:07:00 by omaezzem          #+#    #+#             */
/*   Updated: 2025/11/09 16:00:08 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AAnimal("Dog")
{
    brain = new Brain();
    std::cout << "a default constructor type Dog created" << std::endl;
}

Dog::~Dog()
{
    delete brain;
    std::cout << "Dog is destroyed" << std::endl;
}

Dog& Dog::operator=(const Dog &exist)
{
    if (this != &exist)
    {
        delete brain;
        this->brain = new Brain(*exist.brain);
        AAnimal::operator=(exist);
    }
    std::cout << "===== copy assignement called  ====="<< std::endl;
    return (*this);
}

Dog::Dog(const Dog &exist) : AAnimal(exist)
{
    this->brain = new Brain(*exist.brain);
    std::cout << "copy constructer called"<< std::endl;
}

void Dog::makeSound() const
{
     std::cout << "Dog sound" << std::endl; 
}
