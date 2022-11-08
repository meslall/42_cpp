/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeslall <omeslall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 18:40:46 by omeslall          #+#    #+#             */
/*   Updated: 2022/10/15 17:48:24 by omeslall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

int main()
{

    Zombie *z = newZombie("Zombie");
    z->announce();
    delete z;
    randomChump("Random Zombie");
}