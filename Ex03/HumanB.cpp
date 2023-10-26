/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 00:47:47 by kkouaz            #+#    #+#             */
/*   Updated: 2023/10/26 05:42:28 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"


HumanB :: HumanB(std :: string str) : Weapon1(NULL)
{
  name = str;
  std :: cout << "constructor of " << name << " has been called " << std :: endl ;

}
void HumanB ::  setWeapon(Weapon&  W)
{
    Weapon1 = &W;
}

void HumanB :: attack(void)
{
  const  std ::  string ref = Weapon1->getType();
  std :: cout << name <<  " attacks with their " << ref << std :: endl;
}

HumanB :: ~HumanB(void)
{
    std :: cout << " destructor of " << name << " has been called " << std :: endl;  
}