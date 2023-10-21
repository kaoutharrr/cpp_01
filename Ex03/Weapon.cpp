/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 00:32:58 by kkouaz            #+#    #+#             */
/*   Updated: 2023/10/19 16:02:52 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Weapon.hpp"

Weapon :: Weapon(std :: string str)
{
    type = str;
}

const std ::  string& Weapon :: getType()
{
    const std ::  string& ref = type;
    return(ref);
}

void Weapon :: setType(std :: string newType)
{
    type = newType;
}