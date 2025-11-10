/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 15:38:59 by omaezzem          #+#    #+#             */
/*   Updated: 2025/11/08 15:17:21 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : name("X")
{
    int i = -1;
    while (++i < 4)
        this->inventory[i] = NULL;
}

Character::Character(std::string const &_name) : name(_name)
{
    int i = -1;
    while (++i < 4)
        this->inventory[i] = NULL;
}

Character::~Character()
{
    int i = -1;
    while (++i < 4)
        delete inventory[i];
}

std::string const &Character::getName() const { return (name); }

Character::Character(const Character& exist)
{
    this->name = exist.name;
    int i = -1;
    while (++i < 4)
    {
        if (exist.inventory[i])
            this->inventory[i] = exist.inventory[i]->clone();
        else
            this->inventory[i] = nullptr;
    }
}

Character& Character::operator=(const Character& exist)
{
    if (this != &exist)
    {
        this->name = exist.name;
        int i = -1;
        while (++i < 4)
        {
            delete inventory[i];
            if (exist.inventory[i])
                this->inventory[i] = exist.inventory[i]->clone();
            else
                this->inventory[i] = nullptr;
        }
    }
    return *this;
}

void Character::equip(AMateria* m)
{
    if (!m)
        return;
    int i = -1;
    while (++i < 4)
    {
        if (!inventory[i])
        {
            inventory[i] = m;
            return;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4)
        inventory[idx] = NULL;
}


void Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx < 4 && inventory[idx])
        inventory[idx]->use(target);
}