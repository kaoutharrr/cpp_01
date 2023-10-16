/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 17:58:15 by kkouaz            #+#    #+#             */
/*   Updated: 2023/10/12 11:11:02 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie* zombie1 = newZombie("name 1");
    zombie1->announce();
    Zombie* zombie2 = newZombie("name 2");
    zombie2->announce();
    randomChump("hi");
}