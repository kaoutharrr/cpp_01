/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 22:04:07 by kkouaz            #+#    #+#             */
/*   Updated: 2023/10/21 22:09:33 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int check(std :: string filename, std :: string s1, std :: string s2)
{
    if(filename.empty())
        std :: cerr << "invalid file name !!" << std :: endl ;
    if(s1.empty() || s2.empty())
        std :: cerr << "invaid arguments !! \n";
    else
        return(0);
    return(1);
}