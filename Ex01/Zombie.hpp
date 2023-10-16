/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:18:21 by kkouaz            #+#    #+#             */
/*   Updated: 2023/10/12 11:51:07 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

# include <iostream>
# include <new>

class Zombie
{
    private :
        std :: string name;
    public :
        Zombie(void);
        Zombie(std :: string N);

        void announce( void );
};

Zombie*    zombieHorde( int N, std::string name );
#endif