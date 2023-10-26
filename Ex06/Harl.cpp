/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 20:45:35 by kkouaz            #+#    #+#             */
/*   Updated: 2023/10/26 05:44:18 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Harl.hpp"

void  Harl :: debug(void)
{
    std :: cout << "[ DEBUG ]" << std :: endl;
    std :: cout << "Debug message" << std :: endl;
}
void  Harl :: info(void)
{
    std :: cout << "[ INFO ]" << std :: endl;
    std :: cout << "INFO message" << std :: endl;
}

void  Harl :: warning(void)
{
    std :: cout << "[ WARNING ]" << std :: endl;
    std :: cout << "WARNING message" << std :: endl;
}

void  Harl :: error(void)
{
    std :: cout << "[ ERROR ]" << std :: endl;
    std :: cout << "ERROR message" << std :: endl;
}

void  Harl :: complain( std::string level )
{

    std :: string levels[4];
    levels[0] = "DEBUG";
    levels[1] = "INFO";
    levels[2] = "WARNING";
    levels[3] = "ERROR";

    int i = 0;
    while(i < 4)
    {
        if(levels[i] == level)
        {
            switch(i)
            {
                case 0 :
                    debug();
                    break;
                case 1:
                    debug();
                    info();
                    break;
                case 2:
                    debug();
                    info();
                    warning();
                    break;
                case 3:
                    debug();
                    info();
                    warning();
                    error();
                    break;
                default:
                    std :: cout << "invalid message" << std :: endl;
            }
            return;
        }
        i++;
    }
    std :: cout << "invalid message" << std :: endl;
}