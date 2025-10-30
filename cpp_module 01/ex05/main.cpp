/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 11:46:21 by omaezzem          #+#    #+#             */
/*   Updated: 2025/09/22 11:46:21 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::complain(std::string level)
{
    int i;
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*FuncPtr[4])() = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    i = -1;
    while(++i < 4)
    {
        if (levels[i] == level)
        {
            (this->*FuncPtr[i])();
            return ;
        }
    }
    std::cout << "[ UNKNOWN ]\nHarl doesn’t understand this complaint.\n";
}

int main(){
    Harl harl;
    harl.complain("ERROR");
}
