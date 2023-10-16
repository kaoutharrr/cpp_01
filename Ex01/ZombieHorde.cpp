/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:38:01 by kkouaz            #+#    #+#             */
/*   Updated: 2023/10/12 11:50:06 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*    zombieHorde( int N, std::string name )
{
    Zombie* arrZombie = new Zombie[N];
    for(int i  = 0 ; i < N; i++)
    {
        arrZombie[i]= Zombie(name);
    }
    return(arrZombie);
}