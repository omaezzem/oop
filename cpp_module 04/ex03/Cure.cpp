/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 15:35:23 by omaezzem          #+#    #+#             */
/*   Updated: 2025/11/10 13:20:39 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Character.hpp" 

Cure::Cure() { ttype = "cure"; }

Cure::~Cure() {}

Cure::Cure(const Cure &exist) : AMateria(exist) {}
 
Cure& Cure::operator=(const Cure &exist)
{
    if(this != &exist)
        AMateria::operator=(exist);
    return *this;
}

AMateria* Cure::clone() const { return new Cure(*this); }

void Cure::use(ICharacter& target){ std::cout << "* heals " 
                << target.getName() << "'s wounds *" << std::endl;}
