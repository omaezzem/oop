/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 22:10:04 by omaezzem          #+#    #+#             */
/*   Updated: 2025/11/09 14:23:16 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cat_HPP
#define Cat_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain *brain;
    public:
        Cat();
        virtual ~Cat();
        Cat& operator=(const Cat &exist);
        Cat(const Cat &exist);
        virtual void    makeSound() const;
};

#endif