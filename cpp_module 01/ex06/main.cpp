/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 13:13:35 by omaezzem          #+#    #+#             */
/*   Updated: 2025/09/23 13:13:35 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int find_index(std::string &level, std::string levels[])
{
    int i = -1;
    while(++i < 4)
    {
        if (levels[i] == level)
        {
            return i;
            break;
        }
    }
    return -1;
}

void Harl::complain(std::string level)
{
    int i;
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    i = find_index(level, levels);
    if (i == -1)
    {
        std::cout << "[ Probably complaining about insignificant problems ]\n";
        return ;
    }
    else 
    {
        switch (i)
        {
            case 0:
                this->debug();
            case 1:
                this->info();
            case 2:
                this->warning();
            case 3:
                this->error();
            default:
                break;
        }
    }
}

int main(int ac, char **av)
{
    Harl harl;
    if (ac == 2)
    {
        harl.complain(av[1]);
    }
    else 
        std::cout << "usage : ./harlFilter [DEBUG || INFO || WARNING || ERROR]\n";
}
