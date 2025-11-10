/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 12:06:37 by omaezzem          #+#    #+#             */
/*   Updated: 2025/11/01 15:52:09 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::~DiamondTrap() {std::cout << "DiamondTrap " << name << " has been destroyed!" << std::endl;}

DiamondTrap::DiamondTrap() : ClapTrap("default_clap_name"), name("X_clap_name")
{
    point = FragTrap::point; //100
    energy = ScavTrap::energy; //50
    damage = FragTrap::damage; //0
    std::cout << "DiamondTrap " << name << " has been created (default)!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& exist) : ClapTrap(exist)
{
    this->name = exist.name;
    std::cout << "Copy constructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &exist)
{
    if (this != &exist)
    {
        ClapTrap::operator=(exist);
        this->name = exist.name;
    }
    std::cout << "Copy assignment operator called" << std::endl;
    return *this;
}

DiamondTrap::DiamondTrap(std::string _name) : ClapTrap(_name + "_clap_name")
{
    point = FragTrap::point;
    energy = ScavTrap::energy;
    damage = FragTrap::damage;
}

void DiamondTrap::attack(const std::string &target) { ScavTrap::attack(target); }

void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap name is " << this->name
            << " , ClapTrap name is " << ClapTrap::name << " ."<< std::endl;
}
