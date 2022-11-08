/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeslall <omeslall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 09:37:12 by omeslall          #+#    #+#             */
/*   Updated: 2022/11/08 16:48:12 by omeslall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"HumanA.hpp"


HumanA::HumanA(std::string name,Weapon &wp):name(name),weapon(wp){}
HumanA::~HumanA(){};

void	HumanA::attack(void)
{
 	std::cout << this->weapon.getType()  << std::endl;
}