/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeslall <omeslall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 18:40:46 by omeslall          #+#    #+#             */
/*   Updated: 2022/10/16 17:08:41 by omeslall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

int main()
{

    Zombie *zombie  = zombieHorde(6,"42");
    for (size_t i = 0; i <= 5; i++)
    {
        zombie[i].announce();
    }
    delete[] zombie;
}