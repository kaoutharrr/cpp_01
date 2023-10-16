/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:03:55 by kkouaz            #+#    #+#             */
/*   Updated: 2023/10/13 00:17:23 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

int main()
{
    std :: string S = "HI THIS IS BRAIN";
    std :: string* stringPTR = &S;
    std :: string &stringREF = S;

    std :: cout << "The memory address of the string variable : " << &S << "\n";
    std :: cout << "The memory address held by stringPTR : " << stringPTR << "\n";
    std :: cout << "The memory address held by stringREF : " << &stringREF << "\n";

    std :: cout << "The value of the string variable : " << S << "\n";
    std :: cout << "The value pointed to by stringPTR.: " << *stringPTR << "\n";
    std :: cout << "The value pointed to by stringREF : " << stringREF << "\n";

    
    
    
}
