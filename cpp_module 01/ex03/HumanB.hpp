/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 15:46:22 by omaezzem          #+#    #+#             */
/*   Updated: 2025/09/25 14:54:00 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class   HumanB
{
    private:
        std::string name;
        Weapon *weapon;
    public:
        void    attack();
        void    setWeapon(Weapon &wp);
    HumanB();
    HumanB(std::string str);
    ~HumanB();

};

#endif