/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 15:35:20 by omaezzem          #+#    #+#             */
/*   Updated: 2025/11/08 14:39:56 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure();
        ~Cure();
        Cure(const Cure &exist);
        Cure& operator=(const Cure &exist);
        AMateria* clone() const;
        void use(ICharacter& target);
};

#endif