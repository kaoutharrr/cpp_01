/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 21:50:28 by kkouaz            #+#    #+#             */
/*   Updated: 2023/10/21 23:27:09 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include "header.hpp"
#include <fstream>

int main(int ac, char **av)
{
    std :: string content;
    std :: string line;

    if(ac < 4)
    {
        std :: cerr << "invalid arguments \n";
        return(0);
    }
    if(check(av[1], av[2], av[3]))
        return(0);
    std::ifstream fd(av[1]);
    if(!fd.is_open())
    {
        std :: cerr << "enable to open the file \n";
        return(1);
    }
    while(std :: getline(fd, line))
    {
        content += line + "\n";
    }
    
}