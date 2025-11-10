/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 19:52:12 by omaezzem          #+#    #+#             */
/*   Updated: 2025/11/08 15:40:22 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    int i = -1;
    while (++i < 4)
        learned[i] = NULL;   
}

MateriaSource::MateriaSource(const MateriaSource &exist)
{
    int i = -1;
    while (++i < 4)
    {
        if (exist.learned[i])
            this->learned[i] = exist.learned[i]->clone();
        else
            this->learned[i] = NULL;
    }
}

MateriaSource &MateriaSource::operator=(const MateriaSource &exist)
{
    if (this != &exist)
    {
        int i = -1;
        while (++i < 4)
        {
            delete learned[i];
            if (exist.learned[i])
                this->learned[i] = exist.learned[i]->clone();
            else
                this->learned[i] = NULL;
        }
    }
    return *this;
}

MateriaSource::~MateriaSource()
{
    int i = -1;
    while (++i < 4)
        delete(learned[i]);   
}


void MateriaSource::learnMateria(AMateria* m)
{
    if (!m)
        return;
    int i = -1;
    while (++i < 4)
    {
        if (!learned[i])
        {
            learned[i] = m;
            return;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    int i = -1;
    while (++i < 4)
    {
        if (learned[i] && learned[i]->getType() == type)
            return learned[i]->clone();   
    }
    return nullptr;
}