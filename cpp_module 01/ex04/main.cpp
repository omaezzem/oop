/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 16:42:19 by omaezzem          #+#    #+#             */
/*   Updated: 2025/09/28 13:03:42 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

std::string ft_replace(std::string content, const std::string &s1, const std::string &s2)
{
    size_t pos = 0;
    while ((pos = content.find(s1, pos)) != std::string::npos)
    {
        std::cout << "pos -> "<< pos;
        content.erase(pos, s1.length());
        content.insert(pos, s2);
        pos += s2.length();
    }
    return content;
}

int main(int ac, char **av)
{
    std::string content;
    std::string out_text;
    std::string line;
    if (ac != 4)
        return (std::cout << "usage : ./change filname s1 s2", 1);
    std::string filename = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];
    std::ofstream outfile(filename + ".replace");
    if (!outfile){
        std::cout << "Error: cannot create output file" << std::endl;
        return 1;
    }
    std::ifstream infile(filename);
    if (!infile)
        return (std::cout << "Error: cannot open file " << filename << std::endl, 1);
    while (std::getline(infile, line)){
        content += line + "\n";                                                     
    }
    out_text = ft_replace(content, s1, s2);
    outfile << out_text;
    outfile.close();
    infile.close();
}
