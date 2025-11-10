/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 13:47:07 by omaezzem          #+#    #+#             */
/*   Updated: 2025/11/09 14:18:20 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    j->makeSound();
    i->makeSound();

    delete j;
    delete i;
    Animal *animals[10];
    int k = 0;
    while (k < 5)
    {
        animals[k] = new Dog();
        k++;
    }
    while (k < 10)
    {
        animals[k] = new Cat();
        k++;
    }
    for (int i = 0; i < 10; i++)
        animals[i]->makeSound();
    for (int i = 0; i < 10; i++)
        delete animals[i];
    Dog a;
    Dog b = a;
    b.makeSound();
    return 0;
}
