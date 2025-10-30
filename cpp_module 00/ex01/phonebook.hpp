/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 10:15:38 by omaezzem          #+#    #+#             */
/*   Updated: 2025/09/18 15:21:45 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"

class Phonebook
{
    private:
        Contact contacts[8];
    public:
        void    modify_count(int n);
        void    ft_search(Contact &c, Phonebook &infopb);
        void    ft_add(Phonebook &infopb, Contact &p);
        void    ft_exit(void);
    Phonebook();
    ~Phonebook();
    int flg;
};

#endif

