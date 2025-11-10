/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 20:50:51 by omaezzem          #+#    #+#             */
/*   Updated: 2025/11/03 15:44:02 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {std::cout << "A brain constructeur called (default)" << std::endl;}

Brain::~Brain() {std::cout << "Brain is destoryed"<< std::endl;}

Brain::Brain(const Brain &exist)
{
    int i = 0;
    while (i < 100)
    {
        this->ideas[i] = exist.ideas[i];
        i++;
    }
}

Brain &Brain::operator=(const Brain &exist)
{
    if(this != &exist)
    {
        int i = 0;
        while (i < 100)
        {
            this->ideas[i] = exist.ideas[i];
            i++;
        }
    }
    std::cout << "===== copy assignement called  ====="<< std::endl;
    return (*this);
}
