/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:43:46 by omaezzem          #+#    #+#             */
/*   Updated: 2025/10/28 11:39:17 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
    private:
        std::string name;
        int point;
        int energy;
        int damage;
    public:
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        ClapTrap(std::string name);
        ~ClapTrap();
        ClapTrap();
        ClapTrap(const ClapTrap& exist);
        ClapTrap&   operator=(const ClapTrap &exist);
};

#endif