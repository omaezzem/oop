/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 18:00:03 by omaezzem          #+#    #+#             */
/*   Updated: 2025/10/31 18:39:51 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("X"), point(10), energy(10), damage(0) {        
        std::cout << "ClapTrap " << name << " is created " << std::endl;
}

ClapTrap::~ClapTrap() {std::cout << "ClapTrap " << name << " has been destroyed!" << std::endl;}

ClapTrap::ClapTrap(std::string _name) :  name(_name), point(10), energy(10), damage(0) {
        std::cout << "ClapTrap " << name << " has been created!" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &exist)
{
    if (this != &exist){
        name = exist.name;
        point = exist.point;
        energy = exist.energy;
        damage = exist.damage;
    }
    std::cout << "Copy assignment operator called" << std::endl;
    return *this;
}

ClapTrap::ClapTrap(const ClapTrap& exist) : name(exist.name), point(exist.point),
    energy(exist.energy), damage(exist.damage) // copy constr
{ 
    std::cout << "Copy constructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (point > 0 && energy > 0)
    {
        std::cout << "ClapTrap " << name << " attacks " << target << " , causing " << damage << " points of damage!"<< std::endl;
        energy -= 1;
    }
    else
        std::cout << "ClapTrap "<< name << " cannot act because it has no hit points!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    
    if (static_cast<unsigned int>(point) >= amount)
    {
        std::cout << "ClapTrap " << name << " takes " << amount <<" points of damage!" <<std::endl;
        point -= amount;
    }
    else
    {
        std::cout << "ClapTrap " << name << " took too much damage and has been destroyed!" << std::endl;
        point = 0;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (energy == 0)
        std::cout << "ClapTrap " << name << " cannot act because it has no energy!" << std::endl;
    else
    {
        std::cout << "ClapTrap " << name <<  " repairs itself for " << amount << " hit points!" << std::endl;
        point += amount;
        energy -= 1;
    }
}
