/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 18:02:20 by omaezzem          #+#    #+#             */
/*   Updated: 2025/10/31 18:53:34 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::~ScavTrap(){ std::cout << "ScavTrap " << name << " has been destroyed!" << std::endl;}

ScavTrap::ScavTrap() : ClapTrap("X")
{
    point = 100;
    energy = 50;
    damage = 20;
    std::cout << "ScavTrap " << name << " has been created (default)!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& exist) : ClapTrap(exist)
{
    std::cout << "Copy constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string _name) : ClapTrap(_name)
{
    point = 100;
    energy = 50;
    damage = 20;
    std::cout << "ScavTrap " << name << " has been created!" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &exist)
{
    if (this != &exist)
        ClapTrap::operator=(exist);
    std::cout << "Copy assignment operator called" << std::endl;
    return *this;
}

void ScavTrap::attack(const std::string& target)
{
    if (point > 0 && energy > 0)
    {
        std::cout << "ScavTrap " << name << " attacks " << target << " , causing "<< damage << " points of damage!"<< std::endl;
        energy -= 1;
    }
    else
        std::cout << "ScavTrap "<< name << " cannot attack!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << name << " is now in Gate keeper mode!" << std::endl;
}
