/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 21:50:28 by kkouaz            #+#    #+#             */
/*   Updated: 2023/10/26 05:43:19 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include "header.hpp"
#include <fstream>
#include<string>

int main(int ac, char **av)
{
    std :: string content;
    std :: string line;
    std ::string  newContent;
    if (ac < 4)
    {
        std :: cerr << "invalid arguments " << std :: endl;
        return(0);
    }
    if(check(av[1], av[2], av[3]))
        return(0);
    std::ifstream fd(av[1]);
    if(!fd.is_open())
    {
        std :: cerr << "unable to open the file " << std :: endl;
        return(1);
    }
    while(std :: getline(fd, line))
    {
        content += line + "\n";
    }
    fd.close();
    size_t pos = content.find(av[2]);
    if(pos != std :: string :: npos)
        newContent = myReplace(content, av[2], av[3], pos);
    else
        newContent = content;
   std :: string fileName = av[1];
   fileName += ".replace" ;
    std :: ofstream newFd(fileName);
    if(!newFd.is_open())
    {
        std :: cerr << "unable to open the outfile " << std :: endl;
        return(1);
    }
    newFd << newContent ;
   newFd.close();
}