/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 15:33:38 by omaezzem          #+#    #+#             */
/*   Updated: 2025/11/10 13:20:29 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Character.hpp" 

Ice::Ice() { ttype = "ice"; }

Ice::~Ice() {}

Ice::Ice(const Ice &exist) : AMateria(exist) {}
 
AMateria* Ice::clone() const { return new Ice(*this); }

void Ice::use(ICharacter& target) {std::cout << "* shoots an ice bolt at "
                << target.getName() << " *" << std::endl;}

Ice& Ice::operator=(const Ice &exist)
{
    if(this != &exist)
        AMateria::operator=(exist);
    return *this;
}
