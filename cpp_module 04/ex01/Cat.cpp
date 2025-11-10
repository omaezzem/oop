/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 22:10:43 by omaezzem          #+#    #+#             */
/*   Updated: 2025/11/09 14:21:46 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    brain = new Brain();
    std::cout << "a default constructor type Cat created" << std::endl;
}

Cat::~Cat()
{
    delete brain;
    std::cout << "Cat is destroyed" << std::endl;
}

Cat& Cat::operator=(const Cat &exist)
{
    if (this != &exist)
    {
        delete(brain);
        this->brain = new Brain(*exist.brain);
        Animal::operator=(exist);
    }
    std::cout << "===== copy assignement called  ====="<< std::endl;
    return (*this);
}

Cat::Cat(const Cat &exist) : Animal(exist)
{
    this->brain = new Brain(*exist.brain);
    std::cout << "copy constructer called"<< std::endl;
}

void    Cat::makeSound() const { std::cout << "Cat sound" << std::endl; }
