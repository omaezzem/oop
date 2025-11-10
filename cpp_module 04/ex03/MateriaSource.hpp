/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 16:35:58 by omaezzem          #+#    #+#             */
/*   Updated: 2025/11/10 13:11:31 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"

class IMateriaSource
{
    public:
        virtual ~IMateriaSource() {}
        virtual void learnMateria(AMateria*) = 0;
        virtual AMateria* createMateria(std::string const & type) = 0;
};

class MateriaSource : public IMateriaSource
{
    private:
        AMateria* learned[4];
    public:
        MateriaSource();
        MateriaSource(const MateriaSource &exist);
        MateriaSource &operator=(const MateriaSource &exist);
        virtual ~MateriaSource();
        void learnMateria(AMateria* m);
        AMateria* createMateria(std::string const & type);
};

#endif