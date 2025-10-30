/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 16:46:46 by omaezzem          #+#    #+#             */
/*   Updated: 2025/09/25 14:13:22 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name){
    int i = -1;
    Zombie *hordZombie = new Zombie[N];
    while (N > ++i){
        hordZombie[i].reset_name(name);
        hordZombie[i].announce();
    }
    return (hordZombie);
}
