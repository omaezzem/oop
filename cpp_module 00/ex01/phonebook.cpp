/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 10:15:27 by omaezzem          #+#    #+#             */
/*   Updated: 2025/09/21 16:46:37 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Contact::Contact() {}

Contact::~Contact() {}

void    update_flg(Phonebook &pb)
{
    pb.flg = 1;
    std::cout << "❌ must be printables" << "\n";
}

int    ft_isprint(std::string str)
{
    int i = -1;
    while (str[++i])
    {
        if (!isprint(str[i]))
            return 0;
    }
    return 1;
}

int ft_isdigit(std::string pnumber)
{
    int  i = 0;
    while (pnumber[i])
    {
        if (!isdigit(pnumber[i]))
            return 0;
        i++;
    }
    return 1;
}

void    Phonebook::ft_add(Phonebook &infopb, Contact &p)
{
    std::string name, lastname, nickname, phonenumber, darksecret;

    std::cout << "Enter your name : ";
    if (!getline(std::cin, name) || !ft_isprint(name) || name[0] == '\0')
    {
        update_flg(infopb);
        return ;
    }
    p.modify_name(name);

    std::cout << "Enter your last name : ";
    if (!getline(std::cin, lastname) || !ft_isprint(lastname) || lastname[0] == '\0')
    {
        update_flg(infopb);
        return ;
    }
    p.modify_lastname(lastname);

    std::cout << "Enter your nick name : ";
    if (!getline(std::cin, nickname) || !ft_isprint(nickname) || nickname[0] == '\0')
    {
        update_flg(infopb);
        return ;
    }
    p.modify_nickname(nickname);

    std::cout << "Enter your phone number : ";
    if (!getline(std::cin, phonenumber) || !ft_isprint(phonenumber) || phonenumber[0] == '\0' || !ft_isdigit(phonenumber))
    {
        update_flg(infopb);
        return ;
    }
    p.modify_phonenumber(phonenumber);

    std::cout << "Enter your secret darkest : ";
    if (!getline(std::cin, darksecret) || !ft_isprint(darksecret) || darksecret[0] == '\0')
    {
        update_flg(infopb);
        return ;
    }
    p.modify_darksecret(darksecret);

    infopb.contacts[p.get_index() % 8] = p;
    p.modify_index(p.get_index() + 1);
    std::cout << "✅ Contact added successfully!\n";
}

static std::string resize_field(std::string str)
{
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}

void Phonebook::ft_search(Contact &c, Phonebook &infopb)
{
    int i;
    if (c.get_index() < 8)
        i = c.get_index();
    else
        i = 8;
    int id = i - 1;
    int j = 0;
    if (i == 0)
    {
        std::cout << "📭 PhoneBook is empty!\n";
        return ;
    }
    std::cout << " ___________________________________________ " << std::endl;
    std::cout << "|   Index  |First Name| Last Name| Nickname |" << std::endl;
    std::cout << "|----------|----------|----------|----------|" << std::endl;

    while (j <= id)
    {
        std::cout << "|" << std::setw(10) << j;
        std::cout << "|" << std::setw(10) << resize_field(contacts[j].get_name());
        std::cout << "|" << std::setw(10) << resize_field(contacts[j].get_lastname());
        std::cout << "|" << std::setw(10) << resize_field(contacts[j].get_nickname());
        std::cout << "|\n";
        j++;
    }
    std::cout << " ------------------------------------------- " << std::endl;

    std::cout << "Enter index to view details: ";
    std::string input;
    if (!getline(std::cin, input))
    {
        update_flg(infopb);
        return ;
    }
    if (input.length() != 1 || !isdigit(input[0]))
    {
        std::cout << "❌ Invalid input\n";
        return ;
    }
    int idx = input[0] - '0';
    if (idx < 0 || idx > id)
    {
        std::cout << "❌ Index out of range\n";
        return ;
    }
    std::cout << "First name   : " << contacts[idx].get_name() << "\n";
    std::cout << "Last name    : " << contacts[idx].get_lastname() << "\n";
    std::cout << "Nickname     : " << contacts[idx].get_nickname() << "\n";
    std::cout << "Phone number : " << contacts[idx].get_phonenumber() << "\n";
    std::cout << "Dark secret  : " << contacts[idx].get_darksecrect() << "\n";
}

void Phonebook::ft_exit()
{
    std::cout << "👋 See you soon!\n";
    std::exit(0);
}
