/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newzombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeslall <omeslall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:52:45 by omeslall          #+#    #+#             */
/*   Updated: 2022/10/16 17:01:01 by omeslall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"


Zombie *zombieHorde(int N, std::string name)
{
    Zombie *z = new Zombie[N];
    for(int i = 0; i < N; i++)
        z[i].Zombie_set(name);
    return(z);
}