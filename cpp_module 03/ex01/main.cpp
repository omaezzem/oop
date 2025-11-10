/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 18:00:43 by omaezzem          #+#    #+#             */
/*   Updated: 2025/10/31 15:44:43 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap s1;
    s1.attack("target");
    s1.guardGate();
    s1.takeDamage(30);
    s1.takeDamage(30);
    s1.takeDamage(30);
    s1.takeDamage(30);
    s1.takeDamage(30);
    s1.takeDamage(30);
    s1.beRepaired(20);
    s1.beRepaired(20);
    s1.takeDamage(30);
    s1.takeDamage(30);

    return 0;
}

