/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 15:21:58 by omaezzem          #+#    #+#             */
/*   Updated: 2025/11/08 15:42:30 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : ttype("") {}

AMateria::~AMateria() {}

AMateria::AMateria(const AMateria& exist) { this->ttype = exist.ttype; }

AMateria::AMateria(std::string const & type) : ttype(type) {}

std::string const &AMateria::getType() const {return ttype;}

void    AMateria::use(ICharacter& target)
{
    (void)target;
}

AMateria& AMateria::operator=(const AMateria& exist)
{
    if (this != &exist)
        this->ttype = exist.ttype;
    return *this;
}
