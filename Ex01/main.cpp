/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:38:26 by kkouaz            #+#    #+#             */
/*   Updated: 2023/10/26 01:52:14 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"


int main()
{
    Zombie *arrZombie = zombieHorde(5, "megami");
    for(int i  = 0 ; i < 5; i++)
    {
        arrZombie[i].announce();
    }
    delete[]arrZombie;
}