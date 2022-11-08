/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newzombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeslall <omeslall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:52:45 by omeslall          #+#    #+#             */
/*   Updated: 2022/10/14 23:27:07 by omeslall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

Zombie *newZombie(std::string name)
{
    Zombie *zombie = new Zombie(name);
    return (zombie);
}