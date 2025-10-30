/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 13:04:02 by omaezzem          #+#    #+#             */
/*   Updated: 2025/09/19 17:32:05 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main()
{
    Phonebook pb;
    Contact   c;
    std::string cmd;
    pb.flg = 0;

    std::cout << "=========================================\n";
    std::cout << "        📞  Welcome to PhoneBook 📞      \n";
    std::cout << "=========================================\n";
    std::cout << "Commands:\n";
    std::cout << "  ➤ ADD     : Add a new contact\n";
    std::cout << "  ➤ SEARCH  : Search for a contact\n";
    std::cout << "  ➤ EXIT    : Exit the program\n";
    std::cout << "=========================================\n\n";

    while (true)
    {
        if (pb.flg == 0)
            std::cout << "Enter ➤ ";
        if (pb.flg == 1)
            break;
        if (!std::getline(std::cin, cmd))
            break;
        if (cmd == "ADD")
            pb.ft_add(pb, c);
        else if (cmd == "SEARCH")
            pb.ft_search(c, pb);
        else if (cmd == "EXIT")
            pb.ft_exit();
    }
}
