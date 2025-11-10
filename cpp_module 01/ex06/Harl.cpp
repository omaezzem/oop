/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 13:13:57 by omaezzem          #+#    #+#             */
/*   Updated: 2025/09/23 13:13:57 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}
Harl::~Harl() {}

void Harl::debug( void )
{
    std::cout << "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\nI really do!" << "\n";
    std::cout << "\n";
}

void Harl::info( void )
{
    std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"<< "\n";
    std::cout << "\n";
}


void Harl::warning( void )
{
    std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free.\nI’ve been coming for years, whereas you started working here just last month." << "\n";
    std::cout << "\n";
}

void Harl::error( void )
{
    std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now." << "\n";
    std::cout << "\n";
}
