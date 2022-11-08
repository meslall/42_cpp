/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeslall <omeslall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 18:40:42 by omeslall          #+#    #+#             */
/*   Updated: 2022/10/14 23:33:07 by omeslall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

void randomChump(std::string name)
{
    Zombie zombie = Zombie(name);
    zombie.announce();
}