/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 16:43:58 by omaezzem          #+#    #+#             */
/*   Updated: 2025/09/27 18:18:13 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {}
Zombie::~Zombie(){ 
    std::cout << name << " Destroyed" << "\n";
}

void Zombie::brainzz(void) { 
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::reset_name(std::string n){
    name = n;
}

void    Zombie::announce() {
    std::cout << name <<" Created on heap" << "\n";
}
