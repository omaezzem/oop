/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 16:29:33 by omaezzem          #+#    #+#             */
/*   Updated: 2025/09/25 14:04:45 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class   Zombie
{
    private:
        std::string name;
    public:
        Zombie();
        ~Zombie();
        void    reset_name(std::string name);
        void    brainzz();
        void    announce();
};
Zombie* zombieHorde(int N, std::string name);

#endif