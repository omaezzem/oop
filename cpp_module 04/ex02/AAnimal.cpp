/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 18:55:37 by omaezzem          #+#    #+#             */
/*   Updated: 2025/11/09 14:47:21 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
    std::cout << "AAnimal created" << std::endl;
}

AAnimal::AAnimal(const AAnimal &exist)
{
    type = exist.type;
    std::cout << "AAnimal copied" << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &exist)
{
    if (this != &exist)
        type = exist.type;
    std::cout << "AAnimal assigned" << std::endl;
    return *this;
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal destroyed" << std::endl;
}

std::string AAnimal::getType() const { return type; }

AAnimal::AAnimal(const std::string _type) : type(_type)
{
    std::cout << "Animal of type " << type << " created" << std::endl;
}
