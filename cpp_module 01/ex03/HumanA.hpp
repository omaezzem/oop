/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 15:51:27 by omaezzem          #+#    #+#             */
/*   Updated: 2025/09/25 14:39:07 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class   HumanA
{
    private:
        std::string name;
        Weapon &weapon;
    public:
        void    attack();
    HumanA(std::string str, Weapon &weapon);
    ~HumanA();
};

#endif