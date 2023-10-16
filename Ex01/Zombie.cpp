/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:39:00 by kkouaz            #+#    #+#             */
/*   Updated: 2023/10/12 11:52:41 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie :: Zombie(void)
{
    std ::cout << "constructor called \n";
}
Zombie :: Zombie(std :: string N)
{
    name = N;
}


void Zombie :: announce(void)
{
    std :: cout << name << ":" << " BraiiiiiiinnnzzzZ... " << std :: endl;
}