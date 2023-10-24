/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 20:58:07 by kkouaz            #+#    #+#             */
/*   Updated: 2023/10/24 21:12:22 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Harl.hpp"

int main(int ac, char **av)
{
    if(ac != 2)
    {
        std :: cerr << "invalid arguments\n";
        return(0);
    }
    Harl harl;
    harl.complain(av[1]);
}