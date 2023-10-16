/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 00:24:15 by kkouaz            #+#    #+#             */
/*   Updated: 2023/10/13 00:53:30 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP


#include<iostream>

class Weapon
{
    private:
        std :: string type;
    public :
       const  std :: string &getType(void);
        void setType(std :: string newType);
};
#endif