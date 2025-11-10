/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:43:49 by omaezzem          #+#    #+#             */
/*   Updated: 2025/10/31 12:20:48 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap clap("omaezzem");

    clap.attack("Target1");
    clap.takeDamage(3);
    clap.beRepaired(2);
    clap.attack("Target2");

    return 0;
}
