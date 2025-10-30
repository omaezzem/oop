/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 11:40:07 by omaezzem          #+#    #+#             */
/*   Updated: 2025/09/16 14:42:37 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <unistd.h>
#include <stdlib.h>
#include <cstdlib>
#include <iomanip>

class Contact 
{
	private:
		std::string name;
		std::string lastname;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
		int			index;
	public:
		void			modify_name(std::string info);
		void			modify_lastname(std::string info);
		void			modify_nickname(std::string info);
		void			modify_phonenumber(std::string info);
		void			modify_darksecret(std::string info);
		void			modify_index(int n);
		std::string		get_name(void);	
		std::string		get_lastname(void);	
		std::string		get_nickname(void);	
		std::string		get_phonenumber(void);
		std::string		get_darksecrect(void);
		int				get_index(void);
	Contact();
	~Contact();
};

#endif
