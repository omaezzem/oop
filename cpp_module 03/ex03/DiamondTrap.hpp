/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 11:51:48 by omaezzem          #+#    #+#             */
/*   Updated: 2025/11/01 15:16:27 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <string>
#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
    private:
        std::string name;
    public:
        DiamondTrap();
        ~DiamondTrap();
        DiamondTrap(std::string name);
        void whoAmI();
        void attack(const std::string &target);
        DiamondTrap(const DiamondTrap& exist);
        DiamondTrap& operator=(const DiamondTrap& exist);
};

#endif