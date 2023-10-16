/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 00:32:58 by kkouaz            #+#    #+#             */
/*   Updated: 2023/10/13 00:36:25 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Weapon.hpp"

std :: const string& Weapon :: getType(void)
{
    std :: const string& ref = type;
    return(ref);
}

void Weapon :: setType(std :: string newType)
{
    type = newType;
}