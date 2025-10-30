/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 15:39:29 by omaezzem          #+#    #+#             */
/*   Updated: 2025/09/25 13:54:43 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string n) {name = n;}

Zombie::~Zombie(){ std::cout << name << " is destroyed ." << std::endl; }

void Zombie::brainzzz(void){
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
