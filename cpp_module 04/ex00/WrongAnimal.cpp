/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 15:08:48 by omaezzem          #+#    #+#             */
/*   Updated: 2025/11/03 15:08:33 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){std::cout << "a default constructor type WrongAnimal created" << std::endl;}

WrongAnimal::~WrongAnimal(){std::cout << "WrongAnimal is destroyed" << std::endl;}

std::string    WrongAnimal::getType() const {return (type);}

void    WrongAnimal::makeSound() const {std::cout << "Souooouund " << std::endl;}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &exist)
{
    if (this != &exist)
        this->type = exist.type;
    std::cout << "===== copy assignement called  ====="<< std::endl;
    return (*this);
}

WrongAnimal::WrongAnimal(const WrongAnimal& exist)
{
    this->type = exist.type;
    std::cout << "copy constructer called"<< std::endl;
}

WrongAnimal::WrongAnimal(const std::string _type) : type(_type)
{
    std::cout << "WrongAnimal of type " << type << " created" << std::endl;
}
