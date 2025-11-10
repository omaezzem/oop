/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 14:24:56 by omaezzem          #+#    #+#             */
/*   Updated: 2025/09/25 14:23:06 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main() {
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;
    std::cout<< "address of string variable: "<< &str << std::endl;
    std::cout<< "address of stringPTR: "<< stringPTR<< std::endl;
    std::cout<< "address of stringREF: "<< &stringREF<< std::endl;
    std::cout << "\n";
    std::cout<< "value of string variable: "<< str << std::endl;
    std::cout<< "value of stringPTR: "<< *stringPTR<< std::endl;
    std::cout<< "value of stringREF: "<< stringREF<< std::endl;
}
