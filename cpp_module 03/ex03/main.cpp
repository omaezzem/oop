/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 18:00:43 by omaezzem          #+#    #+#             */
/*   Updated: 2025/11/01 16:25:56 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    std::cout << "=== ClapTrap Test ===" << std::endl;
    DiamondTrap clap;
    clap.attack("target1");
    clap.whoAmI();
    clap.takeDamage(5);
    clap.beRepaired(3);
    return 0;
}
