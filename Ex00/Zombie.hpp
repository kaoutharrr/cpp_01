/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 17:11:02 by kkouaz            #+#    #+#             */
/*   Updated: 2023/10/11 19:59:56 by kkouaz           ###   ########.fr       */
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

        Zombie(std :: string N);

        void announce( void );
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );
#endif 