/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 22:10:04 by omaezzem          #+#    #+#             */
/*   Updated: 2025/11/09 15:28:07 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cat_HPP
#define Cat_HPP

#include "Animal.hpp"

class Cat : public Animal
{
    public:
        Cat();
        virtual ~Cat();
        Cat& operator=(const Cat &exist);
        Cat(const Cat &exist);
        virtual void    makeSound() const;
};

#endif