/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 15:08:03 by omaezzem          #+#    #+#             */
/*   Updated: 2025/09/25 13:54:47 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie 
{
    private:
        std::string name;
    public:
        Zombie(std::string n);
        ~Zombie();
        void brainzzz();
};
Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif