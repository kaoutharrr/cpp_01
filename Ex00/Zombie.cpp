/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 17:15:48 by kkouaz            #+#    #+#             */
/*   Updated: 2023/10/11 18:12:30 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie :: Zombie(std :: string N)
{
    name = N;
}


void Zombie :: announce(void)
{
    std :: cout << name << ":" << " BraiiiiiiinnnzzzZ... " << std :: endl;
}