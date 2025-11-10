/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 15:43:16 by omaezzem          #+#    #+#             */
/*   Updated: 2025/09/20 15:39:16 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
    private:
        std::string type;
    public:        
        std::string getType();
        void        setType(std::string t);
    Weapon();
    Weapon(std::string tweapon);
    ~Weapon();
};

#endif