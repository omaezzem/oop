/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 11:09:46 by omaezzem          #+#    #+#             */
/*   Updated: 2025/10/31 19:00:35 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    public:
        FragTrap();
        ~FragTrap();
        FragTrap(std::string _name);
        void highFivesGuys(void);
        FragTrap(const FragTrap& exist);
        FragTrap&   operator=(const FragTrap &exist);
};

#endif