/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 11:09:42 by omaezzem          #+#    #+#             */
/*   Updated: 2025/11/01 15:29:51 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "FragTrap.hpp"

FragTrap::~FragTrap() {std::cout << "FragTrap " << name << " has been destroyed!" << std::endl;}

void FragTrap::highFivesGuys(void) {std::cout << "FragTrap " << name << " requests a positive high five" << std::endl;}

FragTrap::FragTrap(const FragTrap& exist) : ClapTrap(exist)
{
    std::cout << "Copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &exist)
{
    if (this != &exist)
        ClapTrap::operator=(exist);
    std::cout << "Copy assignment operator called" << std::endl;
    return *this;
}

FragTrap::FragTrap() : ClapTrap("X")
{
    point = 100;
    energy = 100;
    damage = 30;
    std::cout << "FragTrap " << name << " has been created (default)!" << std::endl;
}

FragTrap::FragTrap(std::string _name) : ClapTrap(_name)
{
    point = 100;
    energy = 100;
    damage = 30;
    std::cout << "FragTrap " << name << " has been created!" << std::endl;
}
