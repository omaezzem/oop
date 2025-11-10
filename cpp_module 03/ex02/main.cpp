/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 18:00:43 by omaezzem          #+#    #+#             */
/*   Updated: 2025/11/01 15:40:58 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
    FragTrap ft;

    ft.attack("target");
    ft.takeDamage(20);
    ft.takeDamage(20);
    ft.beRepaired(10);
    ft.highFivesGuys();

    return 0;
}

