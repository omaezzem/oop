/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 14:05:36 by omaezzem          #+#    #+#             */
/*   Updated: 2025/11/02 16:02:33 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){std::cout << "a default constructor type Animal created" << std::endl;}

Animal::~Animal(){std::cout << "Animal is destroyed" << std::endl;}

std::string    Animal::getType() const {return (type);}

void    Animal::makeSound() const {std::cout << "Souooouund " << std::endl;}

Animal& Animal::operator=(const Animal &exist)
{
    if (this != &exist)
        this->type = exist.type;
    std::cout << "===== copy assignement called  ====="<< std::endl;
    return (*this);
}

Animal::Animal(const Animal& exist)
{
    this->type = exist.type;
    std::cout << "copy constructer called"<< std::endl;
}

Animal::Animal(const std::string _type) : type(_type)
{
    std::cout << "Animal of type " << type << " created" << std::endl;
}
