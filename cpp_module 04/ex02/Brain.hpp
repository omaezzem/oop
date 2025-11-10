/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 20:50:48 by omaezzem          #+#    #+#             */
/*   Updated: 2025/11/09 14:41:55 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_CPP
#define BRAIN_CPP

#include "AAnimal.hpp"

class Brain
{
    public:
        std::string ideas[100];
        Brain();
        Brain(const Brain &exist);
        Brain    &operator=(const Brain &exist);
        ~Brain();
};

#endif
