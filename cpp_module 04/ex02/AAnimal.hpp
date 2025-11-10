/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 18:55:30 by omaezzem          #+#    #+#             */
/*   Updated: 2025/11/03 18:56:31 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AAnimal_HPP
#define AAnimal_HPP

#include <iostream>
#include <string>

class AAnimal
{
    protected:
        std::string type;
    public:
        AAnimal();
        AAnimal(const AAnimal &exist);
        AAnimal &operator=(const AAnimal &exist);
        virtual ~AAnimal();
        std::string getType() const;
        AAnimal(const std::string _type);
        virtual void makeSound() const = 0;
};

#endif
