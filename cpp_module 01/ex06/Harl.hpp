/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 13:13:45 by omaezzem          #+#    #+#             */
/*   Updated: 2025/09/23 13:13:45 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>


class   Harl
{
    private:
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
    public:
        void complain(std::string level);
    Harl();
    ~Harl();
};



#endif