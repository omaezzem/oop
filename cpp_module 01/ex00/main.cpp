/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 14:53:34 by omaezzem          #+#    #+#             */
/*   Updated: 2025/09/27 18:20:59 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
    Zombie *heapZombie = newZombie("HeapZombie");
    std::cout << "Creating heap zombie:" << std::endl;
    heapZombie->brainzzz();
    std::cout << std::endl;
    std::cout << "Creating stack zombie:" << std::endl;
    randomChump("stackZombie");
    delete heapZombie;
    return (0);
}

