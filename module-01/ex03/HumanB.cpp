/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:31:38 by omeslall          #+#    #+#             */
/*   Updated: 2022/11/08 23:50:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"HumanB.hpp"

HumanB::HumanB(std::string name):name(name),weapon(NULL){}
HumanB::~HumanB(){}
void    HumanB::setWeapon(Weapon &Wp)
{
    this->weapon = &Wp;
}

void    HumanB::attack()
{
    if (!weapon)
        std::cout<<this->name<<" can't attack because they don't have a weapon"<<std::endl;
    else
        std::cout<<this->name<<" attacks with their "<<weapon->getType()<<std::endl;
}