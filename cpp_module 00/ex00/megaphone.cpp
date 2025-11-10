/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 15:59:32 by omaezzem          #+#    #+#             */
/*   Updated: 2025/08/13 10:14:10 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    int i;
    int j;

    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else if (ac > 1)
    {
        i = 1;
        while (av[i])
        {
            j = 0;
            while (av[i][j])
            {
                if (av[i][j] >= 'a' && av[i][j] <= 'z'){
                    av[i][j] -= 32;
                }
                std::cout << av[i][j];
                j++;
            }
            i++;
            std::cout << std::endl;
        }
    }
}
