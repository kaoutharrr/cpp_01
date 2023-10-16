/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 00:47:47 by kkouaz            #+#    #+#             */
/*   Updated: 2023/10/13 00:58:43 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"


void HumanB :: attack(void)
{
    
  const  std ::  string& ref = Weapon1.getType();
    std :: cout << name <<  "attacks with their " << ref << "\n";
}