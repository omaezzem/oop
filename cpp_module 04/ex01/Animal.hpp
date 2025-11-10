/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 13:47:55 by omaezzem          #+#    #+#             */
/*   Updated: 2025/11/02 16:36:12 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal 
{
    protected:
        std::string type;
    public:
        std::string getType() const;
        Animal& operator=(const Animal &exist);
        Animal();
        virtual ~Animal();
        Animal(const std::string _type);
        virtual void    makeSound() const;
        Animal(const Animal &exist);
};

#endif
