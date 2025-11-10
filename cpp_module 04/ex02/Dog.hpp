/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 22:01:35 by omaezzem          #+#    #+#             */
/*   Updated: 2025/11/09 14:42:05 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
    private:
        Brain *brain;
    public:
        Dog();
        virtual ~Dog();
        Dog& operator=(const Dog &exist);
        Dog(const Dog &exist);
        virtual void    makeSound() const;
};

#endif