/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 15:10:41 by omaezzem          #+#    #+#             */
/*   Updated: 2025/11/02 16:17:10 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongAnimal_HPP
#define WrongAnimal_HPP

#include <iostream>
#include <string>

class WrongAnimal        
{
    protected:
        std::string type;
    public:
        std::string getType() const;
        WrongAnimal& operator=(const WrongAnimal &exist);
        WrongAnimal();
        virtual ~WrongAnimal();
        WrongAnimal(const std::string _type);
        void    makeSound() const;
        WrongAnimal(const WrongAnimal &exist);
};

#endif
