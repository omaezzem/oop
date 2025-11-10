/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 15:50:01 by omaezzem          #+#    #+#             */
/*   Updated: 2025/09/25 15:13:23 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "HumanA.hpp"

HumanB::HumanB(std::string str) { name = str; }
HumanB::~HumanB() {}
HumanB::HumanB() {} 
void    HumanB::setWeapon(Weapon &wp) { weapon = &wp; }
void    HumanB::attack(){
    std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}
