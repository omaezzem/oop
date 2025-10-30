/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 15:51:03 by omaezzem          #+#    #+#             */
/*   Updated: 2025/09/25 14:40:43 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string str, Weapon &wp) : name(str), weapon(wp) {}
void    HumanA::attack() { std::cout << name << " attacks with their " << weapon.getType() << std::endl; }
HumanA::~HumanA() {}
