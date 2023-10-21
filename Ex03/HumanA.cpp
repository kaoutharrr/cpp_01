/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 00:41:19 by kkouaz            #+#    #+#             */
/*   Updated: 2023/10/20 17:30:26 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA :: HumanA(std :: string str, Weapon &W) : Weapon1(W)
{
    name = str;
}

void HumanA :: attack(void)
{
    const std :: string ref = Weapon1.getType();
    std :: cout << name <<  "  attacks with their " << ref << "\n";
}