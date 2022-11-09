/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 09:37:12 by omeslall          #+#    #+#             */
/*   Updated: 2022/11/08 22:29:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"HumanA.hpp"


HumanA::HumanA(std::string name,Weapon &wp):name(name),weapon(wp){}
HumanA::~HumanA(){};

void	HumanA::attack(void)
{
	std::cout << this->name <<" attacks with their "<<this->weapon.getType() << std::endl;
}