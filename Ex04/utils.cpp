/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 22:04:07 by kkouaz            #+#    #+#             */
/*   Updated: 2023/10/26 05:43:31 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include"header.hpp"

int check(std :: string filename, std :: string s1, std :: string s2)
{
    if(filename.empty())
        std :: cerr << "invalid file name !!" << std :: endl ;
    if(s1.empty() || s2.empty())
        std :: cerr << "invaid arguments !! " << std :: endl;
    else
        return(0);
    return(1);
}

std ::string    myReplace(std :: string Content , std ::string s1, std ::string s2, int pos)
{
    std :: string newText;
    newText = Content.substr(0, pos);
    newText += s2;
    newText += Content.substr(pos + s1.length() , Content.length());
    return(newText);
}