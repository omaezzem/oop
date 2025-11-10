/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 18:02:18 by omaezzem          #+#    #+#             */
/*   Updated: 2025/10/31 15:45:13 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP


#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ~ScavTrap();
        ScavTrap(const ScavTrap& exist);
        void guardGate();
        ScavTrap(std::string _name);
        void attack(const std::string& target);
        ScavTrap& operator=(const ScavTrap &exist);
};

#endif