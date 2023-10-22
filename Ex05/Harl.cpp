/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 21:53:14 by kkouaz            #+#    #+#             */
/*   Updated: 2023/10/22 23:16:27 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void  Harl :: debug(void)
{
    
    std :: cout << "Debug message" << std :: endl;
}
void  Harl :: info(void)
{
    std :: cout << "INFO message" << std :: endl;
}

void  Harl :: warning(void)
{
    std :: cout << "WARNING message" << std :: endl;
}

void  Harl :: error(void)
{
    std :: cout << "ERROR message" << std :: endl;
}

void Harl :: complain(std :: string level)
{
   myFunct()->level;
}