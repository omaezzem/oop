/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 15:52:58 by omaezzem          #+#    #+#             */
/*   Updated: 2025/09/25 14:24:41 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

std::string Weapon::getType() {return type;}
Weapon::Weapon(std::string tweapon) {type = tweapon;}
Weapon::Weapon() {}
Weapon::~Weapon() {}
void   Weapon::setType(std::string t) {type = t;}
