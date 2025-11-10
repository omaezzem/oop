/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 13:23:57 by omaezzem          #+#    #+#             */
/*   Updated: 2025/09/16 14:34:06 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include "phonebook.hpp"

Phonebook::Phonebook() {}

Phonebook::~Phonebook() {}

void    Contact::modify_name(std::string info) { name = info; }

void    Contact::modify_lastname(std::string info) { lastname = info; }

void    Contact::modify_nickname(std::string info) { nickname = info; }

void    Contact::modify_phonenumber(std::string info) { phone_number = info; }

void    Contact::modify_darksecret(std::string info) { darkest_secret = info; }

void    Contact::modify_index(int n) { index = n; }

std::string     Contact::get_name(void) { return name; }

std::string     Contact::get_lastname(void) { return lastname; }

std::string     Contact::get_nickname(void) { return nickname; }

std::string     Contact::get_phonenumber(void) { return phone_number; }

std::string     Contact::get_darksecrect(void) { return darkest_secret; }

int     Contact::get_index(void) { return index; }
